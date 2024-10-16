#ifndef SENDFILE_H
#define SENDFILE_H

#pragma once
#include <qobject.h>
#pragma execution_character_set("UTF-8")
#include <QTcpSocket>
class SendFile :
    public QObject
{
    Q_OBJECT;
public:
    explicit SendFile(QObject* parent = nullptr);

    //���ӽ��ն�
    void connectServer(unsigned short port, QString ip);

    //�����ļ�
    void sendFile(QString path);

signals:
    void connectOK();
    void gameover();
    void curPercent(int num);

private:
    QTcpSocket* m_tcp;
};

#endif