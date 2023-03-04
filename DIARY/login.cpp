#include "login.h"
#include "ui_login.h"
#include"home.h"
#include "thediary.h"
#include "Info.h"

#include <QMessageBox>

HOME *home;
THEDIARY *diary;


Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_2_clicked()
{
   hide();
   home = new HOME(this);
   home->show();
}

void Login::on_pushButton_clicked()
{
    if (this->ui->username->text() != "" && this->ui->password->text() != ""){
        hide();
        diary = new THEDIARY(this);
        diary->show();
    } else {
        QMessageBox::StandardButtons buttons = QMessageBox::critical (this, "Worng Username or Password", "Please try again",
            QMessageBox::Ok | QMessageBox::Cancel );
        if (buttons == QMessageBox::Ok){
            this->ui->password->setText("");
        }else {
            hide();
            home = new HOME(this);
            home->show();;
        }
    }

}

