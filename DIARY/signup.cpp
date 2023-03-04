#include "signup.h"
#include "ui_signup.h"
#include "home.h"
#include "login.h"

#include <QMessageBox>

HOME *main;
Signup *sign;


Signup::Signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_2_clicked()
{
    this->close();
    main = new HOME(this);
    main->show();
}


void Signup::on_pushButton_clicked()
{
    if (this->ui->username->text() != "" && this->ui->btnPassword->text() != ""){
        this->close();
        auto login = new Login();
        login->setModal(true);
        login->exec();

    } else {
        QMessageBox::StandardButtons buttons = QMessageBox::critical (this, "The username is taken", "Please try again",
            QMessageBox::Ok | QMessageBox::Cancel );
        if (buttons == QMessageBox::Ok){
            this->ui->username->setText("");
            this->ui->btnPassword->setText("");
        }else {
            hide();
            main = new HOME(this);
            main->show();;
        }
    }
}

