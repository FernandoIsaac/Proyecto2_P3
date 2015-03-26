#include "menu.h"
#include "ui_menu.h"
#include "character.h"
#include "ness.h"
#include "paula.h"
#include "jeff.h"
#include "poo.h"
#include "enemy.h"
#include "dness.h"
#include "djeff.h"
#include "dpoo.h"
#include "dpaula.h"
#include <QApplication>
#include <QSound>
#include <qsound.h>


Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_BNess_clicked()
{
    //DNess mm;
    //mm.setModal(true);
    //mm.exec();
    DNess nn;
    nn.setModal(true);
    nn.exec();



}



void Menu::on_BJeff_clicked()
{
    DJeff jj;
    jj.setModal(true);
    jj.exec();
}

void Menu::on_BPoo_clicked()
{
    dPoo pp;
    pp.setModal(true);
    pp.exec();
}

void Menu::on_BPaula_clicked()
{
    dPaula pu;
    pu.setModal(true);
    pu.exec();
}
