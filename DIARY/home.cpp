#include "home.h"
#include "ui_home.h"
#include "login.h"
#include "signup.h"

Login *login;
Signup *signup;

HOME::HOME(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HOME)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());
}

HOME::~HOME()
{
    delete ui;
}


void HOME::on_pushButton_clicked()
{
    hide();
   login = new Login(this);
   login->show();
}


void HOME::on_pushButton_2_clicked()
{
    hide();
    signup = new Signup(this);
    signup->show();
}

