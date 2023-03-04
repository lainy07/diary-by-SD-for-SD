/********************************************************************************
** Form generated from reading UI file 'thediary.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEDIARY_H
#define UI_THEDIARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_THEDIARY
{
public:
    QLabel *label_5;
    QLabel *label;
    QListView *listView;
    QLabel *label_2;

    void setupUi(QDialog *THEDIARY)
    {
        if (THEDIARY->objectName().isEmpty())
            THEDIARY->setObjectName("THEDIARY");
        THEDIARY->resize(1027, 727);
        THEDIARY->setStyleSheet(QString::fromUtf8("background-color:rgb(232, 220, 184);"));
        label_5 = new QLabel(THEDIARY);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(320, 0, 281, 71));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font: 36pt \"Romantic\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 10);"));
        label_5->setAlignment(Qt::AlignCenter);
        label = new QLabel(THEDIARY);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 70, 751, 31));
        label->setStyleSheet(QString::fromUtf8("background-color:#B07C4F"));
        listView = new QListView(THEDIARY);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(0, 70, 301, 661));
        listView->setStyleSheet(QString::fromUtf8("background-color:#B07C4F"));
        label_2 = new QLabel(THEDIARY);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(570, 10, 111, 51));
        label_2->setStyleSheet(QString::fromUtf8("image:url(:/backgrounds/2293866.png);\n"
"background-color: rgba(255, 255, 255, 10);"));

        retranslateUi(THEDIARY);

        QMetaObject::connectSlotsByName(THEDIARY);
    } // setupUi

    void retranslateUi(QDialog *THEDIARY)
    {
        THEDIARY->setWindowTitle(QCoreApplication::translate("THEDIARY", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("THEDIARY", "OverWrite", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class THEDIARY: public Ui_THEDIARY {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEDIARY_H
