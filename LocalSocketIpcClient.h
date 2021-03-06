#ifndef TESTLOCALSOCKETIPC_H
#define TESTLOCALSOCKETIPC_H

#include <QObject>
#include <QtNetwork>

class LocalSocketIpcClient : public QObject
{
    Q_OBJECT
public:
    LocalSocketIpcClient(QString remoteServername, QObject *parent = 0);
    ~LocalSocketIpcClient();

signals:
    void messageReceived(QString);

public slots:
    void send_MessageToServer(QString message);
    void receiveMessage();
    void socket_connected();
    void socket_disconnected();
    void socket_error(QLocalSocket::LocalSocketError);

private:
    QLocalSocket*   m_socket;
    quint16         m_blockSize;
    QString         m_serverName;
};

#endif // TESTLOCALSOCKETIPC_H
