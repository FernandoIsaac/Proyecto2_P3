#include "poowin.h"
#include "ui_poowin.h"

PooWin::PooWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PooWin)
{
    ui->setupUi(this);
}

PooWin::~PooWin()
{
    delete ui;
}
