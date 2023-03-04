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
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QLineEdit *username;
    QLineEdit *btnPassword;
    QComboBox *comboBox;
    QLabel *label_6;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(445, 404);
        Signup->setStyleSheet(QString::fromUtf8("BACkGROUND-COLOR:rgb(232, 220, 184)\n"
""));
        widget = new QWidget(Signup);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 100, 93, 70));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("COLOR:rgb(0, 0, 0);\n"
"font: 700 9pt \"SansSerif\";"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("COLOR:rgb(0, 0, 0);\n"
"font: 700 9pt \"SansSerif\";"));

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(Signup);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 100, 311, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: #B07C4F;\n"
"font: 10pt \"SansSerif\";"));
        lineEdit_2 = new QLineEdit(Signup);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(120, 140, 311, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: #B07C4F;\342\200\251color: rgb(255, 255, 255);\342\200\251font: 10pt \"SansSerif\";"));
        label_3 = new QLabel(Signup);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 190, 33, 18));
        label_3->setStyleSheet(QString::fromUtf8("COLOR:rgb(0, 0, 0);\n"
"font: 700 10pt \"SansSerif\";"));
        spinBox = new QSpinBox(Signup);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(130, 180, 61, 41));
        spinBox->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"COLOR: BLACK;\n"
"font:700 10pt \"SansSerif\";"));
        label_4 = new QLabel(Signup);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 190, 41, 18));
        label_4->setStyleSheet(QString::fromUtf8("COLOR:rgb(0, 0, 0);\n"
"font: 700 10pt \"SansSerif\";"));
        label_7 = new QLabel(Signup);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(21, 295, 98, 20));
        label_7->setStyleSheet(QString::fromUtf8("COLOR:rgb(0, 0, 0);\n"
"font: 700 10pt \"SansSerif\";"));
        pushButton = new QPushButton(Signup);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 340, 231, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #B07C4F;\n"
"font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));
        label_5 = new QLabel(Signup);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 0, 381, 81));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 48pt \"Romantic\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 10);"));
        label_5->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(Signup);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 340, 131, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #B07C4F;\n"
"font: 900 12pt \"Segoe UI Black\";\n"
"color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));
        username = new QLineEdit(Signup);
        username->setObjectName("username");
        username->setGeometry(QRect(120, 250, 311, 28));
        username->setStyleSheet(QString::fromUtf8("background-color: #B07C4F;\342\200\251color: rgb(255, 255, 255);\342\200\251font: 10pt \"SansSerif\";"));
        btnPassword = new QLineEdit(Signup);
        btnPassword->setObjectName("btnPassword");
        btnPassword->setGeometry(QRect(120, 290, 311, 28));
        btnPassword->setStyleSheet(QString::fromUtf8("background-color: #B07C4F;\342\200\251color: rgb(255, 255, 255);\342\200\251font: 10pt \"SansSerif\";"));
        comboBox = new QComboBox(Signup);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(240, 180, 191, 41));
        comboBox->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"COLOR: BLACK;\n"
"font: 10pt \"SansSerif\";\n"
"font: 700 10pt \"SansSerif\";"));
        label_6 = new QLabel(Signup);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(21, 251, 95, 20));
        label_6->setStyleSheet(QString::fromUtf8("COLOR:rgb(0, 0, 0);\n"
"font: 700 10pt \"SansSerif\";"));

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Signup", "FIRST NAME", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "LAST NAME", nullptr));
        label_3->setText(QCoreApplication::translate("Signup", "AGE", nullptr));
        label_4->setText(QCoreApplication::translate("Signup", "SEX", nullptr));
        label_7->setText(QCoreApplication::translate("Signup", "PASSWORD", nullptr));
        pushButton->setText(QCoreApplication::translate("Signup", "READY TO WRITE?", nullptr));
        label_5->setText(QCoreApplication::translate("Signup", "OverWrite", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Signup", "BACK", nullptr));
        btnPassword->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("Signup", "FEMALE", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Signup", "MALE", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Signup", "NON-BINARY", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Signup", "PREFER NOT TO SAY", nullptr));

        label_6->setText(QCoreApplication::translate("Signup", "USERNAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
