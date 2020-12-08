#include "client.h"
#include "ui_client.h"
#include <QRegExp>
#include <QTcpSocket>
#include <time.h>

client::client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::client)
{
    ui->setupUi(this);
    setLayout(ui->gridLayout);
    setWindowTitle("Chatting Client");
}

client::~client()
{
    delete ui;
    delete socket;
}

void client::readyRead(){
    while(socket->canReadLine())
    {
        QString line=QString::fromUtf8(socket->readLine());
        line=line.left(line.length()-1);
        ui->listWidget->addItem(QString("%2").arg(line));
    }
    ui->listWidget->scrollToBottom();
}

void client::connected(){
    socket->write(QString("A new user joined.\nIP : "+ui->ipLineEdit->text()+" NickName : "+ui->nicname->text()+"\n").toUtf8());
}

void client::on_connectButton_clicked(){
    socket=new QTcpSocket(this);

    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    connect(socket,SIGNAL(connected()),this,SLOT(connected()));
    socket->connectToHost(ui->ipLineEdit->text(),ui->portLineEdit->text().toInt());
}

void client::on_sendButton_clicked()
{
    QString message=ui->messageLineEdit->text().trimmed();
    QString nic=ui->nicname->text().trimmed();
    ct = time(NULL);
    tm = *localtime(&ct);
    sprintf(strTime, "[%02d:%02d:%02d]", tm.tm_hour, tm.tm_min, tm.tm_sec);

    if(!message.isEmpty())
    {
        socket->write(QString(strTime+nic+">>> "+message+"\n").toUtf8());
    }
    ui->messageLineEdit->clear();
    ui->messageLineEdit->setFocus();
}


void client::on_messageLineEdit_returnPressed()
{
    on_sendButton_clicked();
}
