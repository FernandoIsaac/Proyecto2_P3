#include "paulaloss.h"
#include "ui_paulaloss.h"

PaulaLoss::PaulaLoss(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PaulaLoss)
{
    ui->setupUi(this);
}

PaulaLoss::~PaulaLoss()
{
    delete ui;
}
