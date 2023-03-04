#include "errorsignup.h"
#include "ui_errorsignup.h"

Errorsignup::Errorsignup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Errorsignup)
{
    ui->setupUi(this);
}

Errorsignup::~Errorsignup()
{
    delete ui;
}
