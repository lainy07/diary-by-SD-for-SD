#include "thediary.h"
#include "ui_thediary.h"

THEDIARY::THEDIARY(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::THEDIARY)
{
    ui->setupUi(this);
}

THEDIARY::~THEDIARY()
{
    delete ui;
}
