#include "paulawin.h"
#include "ui_paulawin.h"

PaulaWin::PaulaWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PaulaWin)
{
    ui->setupUi(this);
}

PaulaWin::~PaulaWin()
{
    delete ui;
}
