#include "demo1.h"
#include <QThread>
#include "SendFile.h"
#include <QMessageBox>
#include <QFileDialog>

demo1::demo1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.ip->setText("127.0.0.1");
    ui.port->setText("8989");
    ui.progressBar->setRange(0, 100);
    ui.progressBar->setValue(0);
    connect(ui.connectStart, &QPushButton::clicked, this, &demo1::btnClicked);
    connect(ui.selFile, &QPushButton::clicked, this, &demo1::on_selFile_clicked);
    connect(ui.sendFile, &QPushButton::clicked, this, &demo1::on_sendFile_clicked);
    
    //connect(ui.connectStart, SIGNAL(clicked(bool)), this, SLOT(on_btn_clicked()));

    QThread* t = new QThread;

    SendFile* worker = new SendFile;

    worker->moveToThread(t);

    connect(this, &demo1::sendFile, worker, &SendFile::sendFile);
    connect(this, &demo1::startConnect, worker, &SendFile::connectServer);
    

    connect(worker, &SendFile::connectOK, this, [=]() {
        //QMessageBox::information(NULL, "Title", "Content", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        QMessageBox::information(this, "连接服务器","连接已经成功");
        });
    connect(worker, &SendFile::gameover, this, [=]() {
        t->quit();
        t->wait();
        worker->deleteLater();
        t->deleteLater();
        });

    t->start();

    connect(worker, &SendFile::curPercent, ui.progressBar, &QProgressBar::setValue);

}

void demo1::btnClicked()
{
    QString ip = ui.ip->text();
    unsigned short port = ui.port->text().toUShort();
    emit startConnect(port, ip);
}



void demo1::on_selFile_clicked()
{
    QString path = QFileDialog::getOpenFileName();
    if (path.isEmpty()) {
        QMessageBox::information(nullptr, "打开文件", QString::fromUtf8("文件路径不能为空"));
        //QMessageBox::warning(this, "打开文件", "文件路径不能为空");
        return;
    }
    ui.filePath->setText(path);
}

void demo1::on_sendFile_clicked()
{
    emit sendFile(ui.filePath->text());
}