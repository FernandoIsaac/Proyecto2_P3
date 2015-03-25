#include "pooloss.h"
#include "ui_pooloss.h"

PooLoss::PooLoss(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PooLoss)
{
    ui->setupUi(this);
}

PooLoss::~PooLoss()
{
    delete ui;
}
