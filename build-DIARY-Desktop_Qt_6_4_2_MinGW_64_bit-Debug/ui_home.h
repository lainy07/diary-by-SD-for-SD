/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HOME
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HOME)
    {
        if (HOME->objectName().isEmpty())
            HOME->setObjectName("HOME");
        HOME->resize(750, 480);
        HOME->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 220, 184);"));
        centralwidget = new QWidget(HOME);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 120, 571, 131));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 72pt \"Romantic\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 10);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 80, 291, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 18pt \"Swis721 BlkEx BT\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 10);"));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 260, 261, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #B07C4F;\n"
"font: 900 16pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 320, 261, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #B07C4F;\n"
"font: 900 16pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(130, 400, 501, 31));
        label_3->setStyleSheet(QString::fromUtf8("COLOR:rgb(0, 0, 0);\n"
"font: 700 italic 12pt \"SansSerif\";\n"
"\n"
""));
        label_3->setAlignment(Qt::AlignCenter);
        HOME->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HOME);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 750, 25));
        HOME->setMenuBar(menubar);
        statusbar = new QStatusBar(HOME);
        statusbar->setObjectName("statusbar");
        HOME->setStatusBar(statusbar);

        retranslateUi(HOME);

        QMetaObject::connectSlotsByName(HOME);
    } // setupUi

    void retranslateUi(QMainWindow *HOME)
    {
        HOME->setWindowTitle(QCoreApplication::translate("HOME", "HOME", nullptr));
        label->setText(QCoreApplication::translate("HOME", "OverWrite", nullptr));
        label_2->setText(QCoreApplication::translate("HOME", "WELCOME TO", nullptr));
        pushButton->setText(QCoreApplication::translate("HOME", "LOG IN", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HOME", "SIGN UP", nullptr));
        label_3->setText(QCoreApplication::translate("HOME", "ARE YOU READY TO SAY WHAT'S ON YOUR MIND?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HOME: public Ui_HOME {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
