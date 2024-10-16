/********************************************************************************
** Form generated from reading UI file 'demo1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO1_H
#define UI_DEMO1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_demo1Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ip;
    QLabel *label_2;
    QLineEdit *port;
    QPushButton *connectStart;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *filePath;
    QPushButton *selFile;
    QProgressBar *progressBar;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendFile;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *demo1Class)
    {
        if (demo1Class->objectName().isEmpty())
            demo1Class->setObjectName(QString::fromUtf8("demo1Class"));
        demo1Class->resize(600, 400);
        centralWidget = new QWidget(demo1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        ip = new QLineEdit(widget);
        ip->setObjectName(QString::fromUtf8("ip"));

        horizontalLayout->addWidget(ip);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        port = new QLineEdit(widget);
        port->setObjectName(QString::fromUtf8("port"));

        horizontalLayout->addWidget(port);

        connectStart = new QPushButton(widget);
        connectStart->setObjectName(QString::fromUtf8("connectStart"));

        horizontalLayout->addWidget(connectStart);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        filePath = new QLineEdit(widget_2);
        filePath->setObjectName(QString::fromUtf8("filePath"));

        horizontalLayout_2->addWidget(filePath);

        selFile = new QPushButton(widget_2);
        selFile->setObjectName(QString::fromUtf8("selFile"));

        horizontalLayout_2->addWidget(selFile);


        verticalLayout->addWidget(widget_2);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(231, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        sendFile = new QPushButton(widget_3);
        sendFile->setObjectName(QString::fromUtf8("sendFile"));

        horizontalLayout_3->addWidget(sendFile);

        horizontalSpacer_2 = new QSpacerItem(230, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_3);

        demo1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(demo1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        demo1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(demo1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        demo1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(demo1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        demo1Class->setStatusBar(statusBar);

        retranslateUi(demo1Class);

        QMetaObject::connectSlotsByName(demo1Class);
    } // setupUi

    void retranslateUi(QMainWindow *demo1Class)
    {
        demo1Class->setWindowTitle(QCoreApplication::translate("demo1Class", "demo1", nullptr));
        label->setText(QCoreApplication::translate("demo1Class", "ip\345\234\260\345\235\200", nullptr));
        label_2->setText(QCoreApplication::translate("demo1Class", "\347\253\257\345\217\243\345\217\267", nullptr));
        connectStart->setText(QCoreApplication::translate("demo1Class", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        selFile->setText(QCoreApplication::translate("demo1Class", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        sendFile->setText(QCoreApplication::translate("demo1Class", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class demo1Class: public Ui_demo1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO1_H
