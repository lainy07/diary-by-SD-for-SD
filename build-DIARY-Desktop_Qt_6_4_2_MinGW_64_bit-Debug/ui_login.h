/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label_5;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(750, 480);
        Login->setStyleSheet(QString::fromUtf8("BACkGROUND-COLOR: rgb(232, 220, 184);\n"
"border-radius: 12px;\n"
""));
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 151, 161, 31));
        label->setStyleSheet(QString::fromUtf8("COLOR:rgb(0, 0, 0);\n"
"font: 700 14pt \"SansSerif\";"));
        pushButton = new QPushButton(Login);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(380, 390, 230, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #B07C4F;\n"
"font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 251, 161, 31));
        label_2->setStyleSheet(QString::fromUtf8("COLOR:rgb(0, 0, 0);\n"
"font: 700 14pt \"SansSerif\";"));
        pushButton_2 = new QPushButton(Login);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 390, 230, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #B07C4F;\n"
"font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));
        username = new QLineEdit(Login);
        username->setObjectName("username");
        username->setGeometry(QRect(220, 191, 301, 40));
        username->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt \"SansSerif\";"));
        password = new QLineEdit(Login);
        password->setObjectName("password");
        password->setGeometry(QRect(220, 291, 301, 40));
        password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt \"SansSerif\";"));
        label_5 = new QLabel(Login);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(240, 50, 271, 91));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 48pt \"Romantic\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 10);"));
        label_5->setAlignment(Qt::AlignCenter);

        retranslateUi(Login);
        QObject::connect(pushButton_2, &QPushButton::clicked, Login, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Login", "USERNAME", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "READY!", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "PASSWORD", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Login", "BACK", nullptr));
        label_5->setText(QCoreApplication::translate("Login", "LOG IN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
