#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDir>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    m_client = new LocalSocketIpcClient("/home/smit/.calligra/pipe.in", this);
    connect(m_client, SIGNAL(messageReceived(QString)), this, SLOT(messageReceived(QString)));
    connect(ui->pushButtonSend, SIGNAL(clicked()), this, SLOT(send_button_clicked()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::send_button_clicked()
{
    if (!ui->socket->text().isEmpty()) {
        m_client->send_MessageToServer(ui->textBrowser->toPlainText());
    } else {
        ui->textBrowser_2->append("Connect to server first");
    }
}


void Widget::messageReceived(QString message)
{
    ui->textBrowser_2->append(message);
}

void Widget::on_connect_clicked()
{
    ui->socket->setText(QFileDialog::getOpenFileName(this, "Open socket file",
                                                     QDir::home().absolutePath().append(QDir::separator()).append(".calligra")));
    if (!ui->socket->text().isEmpty()) {
        m_client = new LocalSocketIpcClient(ui->socket->text(), this);
    }
}
