/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *username;
    QLineEdit *btnPassword;
    QComboBox *comboBox;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QDateEdit *dateEdit;
    QLabel *label_14;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(750, 480);
        Signup->setStyleSheet(QString::fromUtf8("BACkGROUND-COLOR:rgb(232, 220, 184)\n"
""));
        lineEdit = new QLineEdit(Signup);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(141, 140, 230, 35));
        lineEdit->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
"font: 10pt \"SansSerif\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_2 = new QLineEdit(Signup);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 192, 230, 35));
        lineEdit_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
"font: 10pt \"SansSerif\";\n"
"color: rgb(0, 0, 0);"));
        spinBox = new QSpinBox(Signup);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(520, 193, 140, 35));
        spinBox->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"COLOR: BLACK;\n"
"font: 700 9pt \"Segoe UI\";"));
        pushButton = new QPushButton(Signup);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(409, 390, 230, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #B07C4F;\n"
"font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));
        pushButton_2 = new QPushButton(Signup);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 390, 230, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #B07C4F;\n"
"font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));
        username = new QLineEdit(Signup);
        username->setObjectName("username");
        username->setGeometry(QRect(141, 250, 230, 35));
        username->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
"font: 10pt \"SansSerif\";\n"
"color: rgb(0, 0, 0);"));
        btnPassword = new QLineEdit(Signup);
        btnPassword->setObjectName("btnPassword");
        btnPassword->setGeometry(QRect(140, 302, 230, 35));
        btnPassword->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);\n"
"font: 10pt \"SansSerif\";\n"
"color: rgb(0, 0, 0);"));
        comboBox = new QComboBox(Signup);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(520, 251, 140, 35));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        comboBox->setFont(font);
        comboBox->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"COLOR: BLACK;\n"
"font: 700 9pt \"Segoe UI\";"));
        label_5 = new QLabel(Signup);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(250, 40, 291, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font1.setPointSize(20);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_8 = new QLabel(Signup);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(41, 289, 101, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Variable Text")});
        font2.setPointSize(9);
        font2.setBold(true);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_9 = new QLabel(Signup);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(41, 130, 101, 51));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_10 = new QLabel(Signup);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(41, 181, 101, 60));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_11 = new QLabel(Signup);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(38, 239, 101, 51));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_12 = new QLabel(Signup);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(460, 188, 40, 50));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_13 = new QLabel(Signup);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(461, 241, 31, 51));
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        dateEdit = new QDateEdit(Signup);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(520, 140, 140, 35));
        dateEdit->setFont(font);
        dateEdit->setAcceptDrops(false);
        dateEdit->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"COLOR: BLACK;\n"
"font: 700 9pt \"Segoe UI\";"));
        label_14 = new QLabel(Signup);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(416, 130, 91, 51));
        label_14->setFont(font2);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_14->raise();
        label_12->raise();
        label_13->raise();
        label_8->raise();
        label_11->raise();
        label_9->raise();
        label_10->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        spinBox->raise();
        pushButton->raise();
        pushButton_2->raise();
        username->raise();
        btnPassword->raise();
        comboBox->raise();
        label_5->raise();
        dateEdit->raise();

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Signup", "READY TO WRITE?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Signup", "BACK", nullptr));
        btnPassword->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("Signup", "FEMALE", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Signup", "MALE", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Signup", "NON-BINARY", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Signup", "PREFER NOT TO SAY", nullptr));

        label_5->setText(QCoreApplication::translate("Signup", "Create An Account", nullptr));
        label_8->setText(QCoreApplication::translate("Signup", "PASSWORD:", nullptr));
        label_9->setText(QCoreApplication::translate("Signup", "FIRST NAME:", nullptr));
        label_10->setText(QCoreApplication::translate("Signup", "LAST NAME:", nullptr));
        label_11->setText(QCoreApplication::translate("Signup", "USER NAME:", nullptr));
        label_12->setText(QCoreApplication::translate("Signup", "AGE:", nullptr));
        label_13->setText(QCoreApplication::translate("Signup", "SEX:", nullptr));
        label_14->setText(QCoreApplication::translate("Signup", "BIRTHDAY:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
