#include "jeffloss.h"
#include "ui_jeffloss.h"

JeffLoss::JeffLoss(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JeffLoss)
{
    ui->setupUi(this);
}

JeffLoss::~JeffLoss()
{
    delete ui;
}
