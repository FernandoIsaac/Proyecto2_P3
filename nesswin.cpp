#include "nesswin.h"
#include "ui_nesswin.h"

NessWin::NessWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NessWin)
{
    ui->setupUi(this);
}

NessWin::~NessWin()
{
    delete ui;
}
