#include "dness.h"
#include "ui_dness.h"

DNess::DNess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DNess)
{
    ui->setupUi(this);
}

DNess::~DNess()
{
    delete ui;
}

