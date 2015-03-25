#include "nessloss.h"
#include "ui_nessloss.h"

NessLoss::NessLoss(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NessLoss)
{
    ui->setupUi(this);
}

NessLoss::~NessLoss()
{
    delete ui;
}
