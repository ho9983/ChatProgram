#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>

namespace Ui {
class client;
}

class QTcpSocket;

class client : public QWidget
{
    Q_OBJECT

public:
    explicit client(QWidget *parent = 0);
    ~client();



private slots:
    void readyRead(); //서버로부터 메시지가 온경우
    void connected(); //연결이 완료되었으면 서버에게 연결되었다고 알림
    void on_connectButton_clicked(); //연결 버튼을 누름
    void on_sendButton_clicked(); //채팅 메세지 전송 버튼을 누름
    void on_fileSendButton_clicked();

    void on_messageLineEdit_returnPressed();

private:
    Ui::client *ui;
    QTcpSocket* socket; //나의 소켓
    time_t ct;
    struct tm tm;
    char strTime[50];
};

#endif // CLIENT_H
