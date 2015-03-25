#include "dpoo.h"
#include "ui_dpoo.h"

dPoo::dPoo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dPoo)
{
    ui->setupUi(this);
}

dPoo::~dPoo()
{
    delete ui;
}
