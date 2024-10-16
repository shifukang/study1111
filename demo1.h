#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_demo1.h"
#pragma execution_character_set("UTF-8")
class demo1 : public QMainWindow
{
    Q_OBJECT

public:
    demo1(QWidget *parent = Q_NULLPTR);

signals:
    void startConnect(unsigned short, QString);
    void sendFile(QString path);
private:
    Ui::demo1Class ui;
    void btnClicked();
    void on_selFile_clicked();
    void on_sendFile_clicked();
};
