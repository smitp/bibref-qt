#include "LocalSocketIpcClient.h"

#include <QDebug>
#include <QDataStream>

LocalSocketIpcClient::LocalSocketIpcClient(QString remoteServername, QObject *parent) :
        QObject(parent)
{

    m_socket = new QLocalSocket(this);
    m_serverName = remoteServername;

    connect(m_socket, SIGNAL(connected()), this, SLOT(socket_connected()));
    connect(m_socket, SIGNAL(disconnected()), this, SLOT(socket_disconnected()));

    m_socket->connectToServer(m_serverName, QLocalSocket::ReadWrite);

    connect(m_socket, SIGNAL(readyRead()), this, SLOT(receiveMessage()));
    connect(m_socket, SIGNAL(error(QLocalSocket::LocalSocketError)),
            this, SLOT(socket_error(QLocalSocket::LocalSocketError)));
}

LocalSocketIpcClient::~LocalSocketIpcClient() {
    m_socket->abort();
    delete m_socket;
    m_socket = NULL;
}

void LocalSocketIpcClient::send_MessageToServer(QString message) {
    if (m_socket->state() != QLocalSocket::ConnectedState) {
        m_socket->connectToServer(m_serverName, QLocalSocket::ReadWrite);
    }

    if (message.isEmpty()) {
        return;
    }

    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);
    out << message;
    out.device()->seek(0);
    m_socket->write(block);
    m_socket->flush();
}


void LocalSocketIpcClient::receiveMessage() {
    QDataStream in(m_socket);
    QString data;
    in >> data;
    qDebug() << "recved " << data;
    emit messageReceived(data);
}

void LocalSocketIpcClient::socket_connected() {
    emit messageReceived("Disconnected from server");
}

void LocalSocketIpcClient::socket_disconnected() {
    emit messageReceived("Disconnected from server");
}

void LocalSocketIpcClient::socket_error(QLocalSocket::LocalSocketError) {
    emit messageReceived(QString("socket_error ").append(m_socket->errorString()));
}
