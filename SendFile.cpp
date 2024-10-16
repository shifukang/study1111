#include "SendFile.h"
#include <QHostAddress>
#include<QFile>
#include<QFileInfo>
#include<QDebug>

SendFile::SendFile(QObject* parent) : QObject(parent)
{

}

void SendFile::connectServer(unsigned short port, QString ip)
{
	qDebug() << "·¢ËÍ¶Ë¿Ú£º" << ip<<port;
	m_tcp = new QTcpSocket;
	m_tcp->connectToHost(QHostAddress(ip), port);

	connect(m_tcp, &QTcpSocket::connected, this, &SendFile::connectOK);
	connect(m_tcp, &QTcpSocket::disconnected, this, [=](){
		m_tcp->close();
		m_tcp->deleteLater();
		emit gameover();
		});
}

void SendFile::sendFile(QString path)
{
	QFile file(path);
	QFileInfo info(path);
	int fileSize = info.size();
	QString fileName = info.fileName(); // Get the filename
	int fileNameSize = fileName.size();
	file.open(QFile::ReadOnly);
	qDebug() << "Send fileNameSize:" << fileNameSize;
	qDebug() << "Send fileName:" << fileName;

	while (!file.atEnd())
	{
		static int num = 0;
		if (num == 0)
		{
			m_tcp->write((char*)&fileNameSize, sizeof(int));
			m_tcp->write(fileName.toUtf8());
			m_tcp->write((char*)&fileSize, 4);
		}
		QByteArray line = file.readLine();
		num += line.size();
		int percent = (num * 100 / fileSize);
		emit curPercent(percent);
		m_tcp->write(line);
	}
}
