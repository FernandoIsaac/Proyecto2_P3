#include "dpoo.h"
#include "ui_dpoo.h"
#include <QApplication>
#include <QLabel>
#include "poo.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <QTextStream>
#include <QDebug>
#include <QFile>
#include <poowin.h>
#include <pooloss.h>
#include "enemy.h"


using std::string;
using std::vector;
using std::ctime;
using std::srand;
bool starstormbool= true;

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

void dPoo::on_pushButton_clicked()
{
    srand(time(0));
    int random;
    int cont=0;
    unsigned int bossattack;
    string bossname;
    bool bossalive = true;
    int bossHP;

    //Q_UNUSED(argc);
    //Q_UNUSED(argv);

   vector<Enemy*> enemigos;

   QString text;

   QFile File_For_Writing("xaviselacome.txt");
   File_For_Writing.open(QIODevice::WriteOnly | QIODevice::Truncate);
    QTextStream text_stream_for_writing(&File_For_Writing);

    text = "Xavi Se La Come";

    text_stream_for_writing<<text;

    File_For_Writing.close();

    text.clear();

    //QFile file_for_reading("/home/isaac/Proyecto_P3_FIRM/xaviselacome.txt");
    QFile file_for_reading(":/xaviselacome.txt");
    file_for_reading.open(QIODevice::ReadOnly);
    QTextStream text_stream_for_reading(&file_for_reading);

    for(int i = 0; i < 9; i++){
        if(i==0){
            if(cont==0){
                text_stream_for_reading.seek(0);
                bossattack= text_stream_for_reading.read(1).toInt();
                cont++;
                }
            if(cont==1){
                text_stream_for_reading.seek(4);
                bossname=text_stream_for_reading.read(11).toStdString();
                cont++;
            }
            if(cont==2){
                text_stream_for_reading.seek(22);
                bossHP = text_stream_for_reading.read(2).toInt();
            }
            enemigos.push_back(new Enemy(bossattack, bossname, true, bossHP, 0));
            cont = 0;
           }
        if(i==1){
            if(cont==0){
                text_stream_for_reading.seek(26);
                bossattack= text_stream_for_reading.read(1).toInt();
                cont++;
                }
            if(cont==1){
                text_stream_for_reading.seek(29);
                bossname=text_stream_for_reading.read(10).toStdString();
                cont++;
            }
            if(cont==2){
                text_stream_for_reading.seek(47);
                bossHP = text_stream_for_reading.read(2).toInt();
            }
            enemigos.push_back(new Enemy(bossattack, bossname, true, bossHP, 0));
            cont = 0;
        }
        if(i==2){
            if(cont==0){
                text_stream_for_reading.seek(51);
                bossattack= text_stream_for_reading.read(1).toInt();
                cont++;
                }
            if(cont==1){
                text_stream_for_reading.seek(54);
                bossname=text_stream_for_reading.read(18).toStdString();
                cont++;
            }
            if(cont==2){
                text_stream_for_reading.seek(80);
                bossHP = text_stream_for_reading.read(2).toInt();
            }
            enemigos.push_back(new Enemy(bossattack, bossname, true, bossHP, 0));
            cont = 0;
        }
        if(i==3){
            if(cont==0){
                text_stream_for_reading.seek(84);
                bossattack= text_stream_for_reading.read(1).toInt();
                cont++;
                }
            if(cont==1){
                text_stream_for_reading.seek(87);
                bossname=text_stream_for_reading.read(6).toStdString();
                cont++;
            }
            if(cont==2){
                text_stream_for_reading.seek(101);
                bossHP = text_stream_for_reading.read(2).toInt();
            }
            enemigos.push_back(new Enemy(bossattack, bossname, true, bossHP, 0));
            cont = 0;
        }
        if(i==4){
            if(cont==0){
                text_stream_for_reading.seek(105);
                bossattack= text_stream_for_reading.read(1).toInt();
                cont++;
                }
            if(cont==1){
                text_stream_for_reading.seek(108);
                bossname=text_stream_for_reading.read(18).toStdString();
                cont++;
            }
            if(cont==2){
                text_stream_for_reading.seek(134);
                bossHP = text_stream_for_reading.read(2).toInt();
            }
            enemigos.push_back(new Enemy(bossattack, bossname, true, bossHP, 0));
            cont = 0;
        }if(i==5){
            if(cont==0){
                text_stream_for_reading.seek(138);
                bossattack= text_stream_for_reading.read(2).toInt();
                cont++;
                }
            if(cont==1){
                text_stream_for_reading.seek(142);
                bossname=text_stream_for_reading.read(17).toStdString();
                cont++;
            }
            if(cont==2){
                text_stream_for_reading.seek(167);
                bossHP = text_stream_for_reading.read(3).toInt();
            }
            enemigos.push_back(new Enemy(bossattack, bossname, true, bossHP, 0));
            cont = 0;
        }
        if(i==6){
                    if(cont==0){
                        text_stream_for_reading.seek(172);
                        bossattack= text_stream_for_reading.read(2).toInt();
                        cont++;
                        }
                    if(cont==1){
                        text_stream_for_reading.seek(176);
                        bossname=text_stream_for_reading.read(15).toStdString();
                        cont++;
                    }
                    if(cont==2){
                        text_stream_for_reading.seek(199);
                        bossHP = text_stream_for_reading.read(3).toInt();
                    }
                    enemigos.push_back(new Enemy(bossattack, bossname, true, bossHP, 0));
                    cont = 0;
                }
        if(i==7){
                    if(cont==0){
                        text_stream_for_reading.seek(204);
                        bossattack= text_stream_for_reading.read(2).toInt();
                        cont++;
                        }
                    if(cont==1){
                        text_stream_for_reading.seek(208);
                        bossname=text_stream_for_reading.read(10).toStdString();
                        cont++;
                    }
                    if(cont==2){
                        text_stream_for_reading.seek(226);
                        bossHP = text_stream_for_reading.read(3).toInt();
                    }
                    enemigos.push_back(new Enemy(bossattack, bossname, true, bossHP, 0));
                    cont = 0;
                }
        if(i==8){
                    if(cont==0){
                        text_stream_for_reading.seek(231);
                        bossattack= text_stream_for_reading.read(2).toInt();
                        cont++;
                        }
                    if(cont==1){
                        text_stream_for_reading.seek(235);
                        bossname=text_stream_for_reading.read(11).toStdString();
                        cont++;
                    }
                    if(cont==2){
                        text_stream_for_reading.seek(254);
                        bossHP = text_stream_for_reading.read(3).toInt();
                    }
                    enemigos.push_back(new Enemy(bossattack, bossname, true, bossHP, 0));
                    cont = 0;
                }
    }


    file_for_reading.close();

    vector<char*> imagenes;

    imagenes.push_back(":/1 - Titanic Ant.gif");
    imagenes.push_back(":/2 - Mondo Mole.gif");
    imagenes.push_back(":/3 - Trillionage Sprout.gif");
    imagenes.push_back(":/4 - Shrooom!.gif");
    imagenes.push_back(":/5 - Plague Rat of Doom.gif");
    imagenes.push_back(":/6 - Thunder and Storm.gif");
    imagenes.push_back(":/7 - Electro Specter.gif");
    imagenes.push_back(":/8 - Carbon Dog.gif");
    imagenes.push_back(":/9 - Diamond Dog.gif");


    random = rand() % 9;

    QImage myImage;

    myImage.load(imagenes[random]);

    QLabel myLabel;
    myLabel.setPixmap(QPixmap::fromImage(myImage));
    ui->sprite->setPixmap(QPixmap::fromImage(myImage));
    ui->HPBoss->setText( QString::number((enemigos[random]->HP)));
    ui->pushButton->setDisabled(true);
    ui->attack->setEnabled(true);
    ui->magia->setEnabled(true);
    ui->EnemyStoreAttack->setVisible(false);
    ui->EnemyStoreName->setVisible(false);
    ui->EnemyStoreHP->setVisible(false);
    //ui->l5->setVisible(false);
    /*bossattack, bossname, true, bossHP, 0)*/
    ui->EnemyStoreAttack->setText(QString::number(enemigos[random]->ataque));
    ui->EnemyStoreName->setText(QString::fromStdString(enemigos[random]->name));
    ui->EnemyStoreHP->setText(QString::number(enemigos[random]->HP));
    Poo* poo = new Poo(11, "Poo", true, 220, 10, 100.0);
    ui->PlayerHP->setText(QString::number(poo->HP));
    ui->PlayerMagic->setText(QString::number(poo->magic));
    myLabel.show();
    starstormbool=true;
    //ui->PlayerHP->setText(QString::number());

}



void dPoo::on_attack_clicked()
{
    Poo* poo = new Poo(11, "Poo", true,ui->PlayerHP->text().toInt(),ui->PlayerMagic->text().toInt(), 100.0);
    Enemy* enemy = new Enemy(ui->EnemyStoreAttack->text().toInt(), ui->EnemyStoreName->text().toStdString(), true, ui->EnemyStoreHP->text().toInt(), 0);


    int turno = 0;
    ui->Message->setText("Poo Ataco!");
    //enemy->HP = enemy->getHP()- poo->getAtaque();
    enemy->HP = enemy->getHP(poo->getAtaque());
    ui->HPBoss->setText(QString::number(enemy->HP));
    ui->EnemyStoreHP->setText(QString::number(enemy->HP));

    if(turno%2==0){
        ui->attack->setEnabled(true);
        ui->magia->setEnabled(true);
        if(starstormbool==true){
            ui->pushButton_3->setEnabled(true);
        }
        ui->finish->setDisabled(true);
    }
    turno++;
    if(turno%2!=0){
        ui->attack->setDisabled(true);
        ui->magia->setDisabled(true);
        ui->finish->setEnabled(true);
        if(starstormbool==true){
            ui->pushButton_3->setDisabled(true);
        }

    }
    turno++;
    if(enemy->HP<= 0){
        ui->HPBoss->setText("0");
        PooWin gano;
        gano.setModal(true);
        gano.exec();
        ui->attack->setDisabled(true);
        ui->magia->setDisabled(true);
        ui->finish->setDisabled(true);

    }
}

void dPoo::on_magia_clicked()
{

    int turno = 0;

    Poo* poo = new Poo(11, "Poo", true,ui->PlayerHP->text().toInt(),ui->PlayerMagic->text().toInt(), 100);

    ui->Message->setText("Poo Uso Magia para Regenerar su vida!");


    if(poo->magic>0){

        poo->magic = poo->getMagic();

        poo->HP = 260;

    }

    else{

        ui->Message->setText("No Tienes suficiente magia!");

    }

    ui->PlayerMagic->setText(QString::number(poo->magic));

    ui->PlayerHP->setText(QString::number(poo->HP));

    if(turno%2==0){

        ui->attack->setEnabled(true);

        ui->magia->setEnabled(true);

        ui->finish->setDisabled(true);

        if(starstormbool==true){

            ui->pushButton_3->setEnabled(true);

        }

    }

    turno++;

    if(turno%2!=0){

        ui->attack->setDisabled(true);

        ui->magia->setDisabled(true);

        ui->finish->setEnabled(true);

        if(starstormbool==true){

            ui->pushButton_3->setDisabled(true);


        }


    }

    turno++;
}

void dPoo::on_finish_clicked()
{
    Poo* poo = new Poo(9, "Poo", true,ui->PlayerHP->text().toInt(),ui->PlayerMagic->text().toInt(), 100.0);

    Enemy* enemy = new Enemy(ui->EnemyStoreAttack->text().toInt(), ui->EnemyStoreName->text().toStdString(), true, ui->EnemyStoreHP->text().toInt(), 0);

    ui->Message->setText("El Enemigo ha Atacado!");

    //poo->HP=poo->getHP() - enemy->getAtaque();

    poo->HP=poo->getHP(enemy->getAtaque());

    ui->PlayerHP->setText(QString::number(poo->HP));

    ui->attack->setEnabled(true);

    ui->magia->setEnabled(true);

    ui->finish->setDisabled(true);

    if(starstormbool==true){

        ui->pushButton_3->setEnabled(true);

    }

    if(poo->HP<=0){

        ui->PlayerHP->setText("0");

        PooLoss loss;

        loss.setModal(true);

        loss.exec();

        ui->attack->setDisabled(true);

        ui->magia->setDisabled(true);

        ui->finish->setDisabled(true);

    }

}

void dPoo::on_pushButton_3_clicked()
{
    Poo* poo = new Poo(11, "Poo", true,ui->PlayerHP->text().toInt(),ui->PlayerMagic->text().toInt(), 100.0);
    Enemy* enemy = new Enemy(ui->EnemyStoreAttack->text().toInt(), ui->EnemyStoreName->text().toStdString(), true, ui->EnemyStoreHP->text().toInt(), 0);
    ui->Message->setText("POO USO PK STARSTORM!!");
    enemy->HP = enemy->getHP(100);
    ui->HPBoss->setText(QString::number(enemy->HP));
    ui->EnemyStoreHP->setText(QString::number(enemy->HP));
    ui->pushButton_3->setVisible(false);
    starstormbool = false;
    poo->starstorm = 0.0;
    ui->finish->setEnabled(true);

    if(enemy->HP<= 0){
        ui->HPBoss->setText("0");
        PooWin gano;
        gano.setModal(true);
        gano.exec();
        ui->attack->setDisabled(true);
        ui->magia->setDisabled(true);
        ui->finish->setDisabled(true);

    }


}
