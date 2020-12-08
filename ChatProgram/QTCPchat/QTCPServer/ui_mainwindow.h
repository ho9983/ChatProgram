/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser_receivedMessages;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_sendMessage;
    QPushButton *pushButton_sendAttachment;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_receiver;
    QLineEdit *lineEdit_message;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(401, 358);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser_receivedMessages = new QTextBrowser(centralWidget);
        textBrowser_receivedMessages->setObjectName(QStringLiteral("textBrowser_receivedMessages"));
        textBrowser_receivedMessages->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(textBrowser_receivedMessages, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_sendMessage = new QPushButton(centralWidget);
        pushButton_sendMessage->setObjectName(QStringLiteral("pushButton_sendMessage"));
        pushButton_sendMessage->setMinimumSize(QSize(0, 0));
        pushButton_sendMessage->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pushButton_sendMessage, 1, 0, 1, 1);

        pushButton_sendAttachment = new QPushButton(centralWidget);
        pushButton_sendAttachment->setObjectName(QStringLiteral("pushButton_sendAttachment"));
        pushButton_sendAttachment->setStyleSheet(QStringLiteral(""));
        pushButton_sendAttachment->setFlat(false);

        gridLayout_2->addWidget(pushButton_sendAttachment, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBox_receiver = new QComboBox(centralWidget);
        comboBox_receiver->setObjectName(QStringLiteral("comboBox_receiver"));
        comboBox_receiver->setMinimumSize(QSize(110, 0));

        horizontalLayout->addWidget(comboBox_receiver);

        lineEdit_message = new QLineEdit(centralWidget);
        lineEdit_message->setObjectName(QStringLiteral("lineEdit_message"));
        lineEdit_message->setMinimumSize(QSize(150, 0));
        lineEdit_message->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(lineEdit_message);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 401, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QTCPServer", 0));
        pushButton_sendMessage->setText(QApplication::translate("MainWindow", "Send Message", 0));
        pushButton_sendAttachment->setText(QApplication::translate("MainWindow", "Send Attachment", 0));
        comboBox_receiver->clear();
        comboBox_receiver->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Broadcast", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
