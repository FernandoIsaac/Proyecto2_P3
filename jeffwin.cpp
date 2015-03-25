#include "jeffwin.h"
#include "ui_jeffwin.h"

JeffWin::JeffWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JeffWin)
{
    ui->setupUi(this);
}

JeffWin::~JeffWin()
{
    delete ui;
}
