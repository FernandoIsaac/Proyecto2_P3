#include "djeff.h"
#include "ui_djeff.h"
#include "dness.h"
#include "ui_denemy.h"
#include <QApplication>
#include <QLabel>
#include "jeff.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <QTextStream>
#include <QDebug>
#include <QFile>
#include "jeffloss.h"
#include "jeffwin.h"
#include "enemy.h"

using std::vector;
using std::string;


DJeff::DJeff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DEnemiesJeff)
{
    ui->setupUi(this);
}

DJeff::~DJeff()
{
    delete ui;
}

void DJeff::on_pushButton_clicked()
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
        imagenes.push_back("/home/isaac/Proyecto_P3_FIRM/Sprites/1 - Titanic Ant.gif");
        imagenes.push_back("/home/isaac/Proyecto_P3_FIRM/Sprites/2 - Mondo Mole.gif");
        imagenes.push_back("/home/isaac/Proyecto_P3_FIRM/Sprites/3 - Trillionage Sprout.gif");
        imagenes.push_back("/home/isaac/Proyecto_P3_FIRM/Sprites/4 - Shrooom!.gif");
        imagenes.push_back("/home/isaac/Proyecto_P3_FIRM/Sprites/5 - Plague Rat of Doom.gif");
        imagenes.push_back("/home/isaac/Proyecto_P3_FIRM/Sprites/6 - Thunder and Storm.gif");
        imagenes.push_back("/home/isaac/Proyecto_P3_FIRM/Sprites/7 - Electro Specter.gif");
        imagenes.push_back("/home/isaac/Proyecto_P3_FIRM/Sprites/8 - Carbon Dog.gif");
        imagenes.push_back("/home/isaac/Proyecto_P3_FIRM/Sprites/9 - Diamond Dog.gif");

        random = rand() % 9;

        QImage myImage;
        //myImage.load("/home/isaac/Desktop/Sprites/Jeff.png");
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
        Jeff* jeff = new Jeff(15, "Jeff", true, 201, 0, 0);
        ui->PlayerHP->setText(QString::number(jeff->HP));
        ui->PlayerMagic->setText(QString::number(jeff->magic));
        ui->IQ->setText(QString::number(jeff->IQ));
        ui->weapon->setVisible(false);
        myLabel.show();

        //ui->PlayerHP->setText(QString::number());
}


void DJeff::on_attack_clicked()
{
    Jeff* jeff = new  Jeff(7, "Jeff", true,ui->PlayerHP->text().toInt(),ui->PlayerMagic->text().toInt(), ui->IQ->text().toInt());
        Enemy* enemy = new Enemy(ui->EnemyStoreAttack->text().toInt(), ui->EnemyStoreName->text().toStdString(), true, ui->EnemyStoreHP->text().toInt(), 0);
        int turno = 0;
        ui->Message->setText("Jeff Ataco!");
        enemy->HP = enemy->getHP(jeff->getAtaque());
        jeff->IQ=jeff->getIQ();
        ui->HPBoss->setText(QString::number(enemy->HP));
        ui->EnemyStoreHP->setText(QString::number(enemy->HP));
        ui->IQ->setText(QString::number(jeff->IQ));

        if(turno%2==0){
            ui->attack->setEnabled(true);
            ui->magia->setEnabled(true);
            ui->finish->setDisabled(true);
        }
        turno++;
        if(turno%2!=0){
            ui->attack->setDisabled(true);
            ui->magia->setDisabled(true);
            ui->finish->setEnabled(true);
        }
        turno++;
        if(enemy->HP<= 0){

            JeffWin gano;
            gano.setModal(true);
            gano.exec();
            ui->attack->setDisabled(true);
            ui->magia->setDisabled(true);
            ui->finish->setDisabled(true);
            ui->HPBoss->setText("0");
        }
}

void DJeff::on_finish_clicked()
{
    Jeff* jeff = new  Jeff(7, "Jeff", true,ui->PlayerHP->text().toInt(),ui->PlayerMagic->text().toInt(), ui->IQ->text().toInt());
        Enemy* enemy = new Enemy(ui->EnemyStoreAttack->text().toInt(), ui->EnemyStoreName->text().toStdString(), true, ui->EnemyStoreHP->text().toInt(), 0);
        ui->Message->setText("El Enemigo ha Atacado!");
         jeff->HP=jeff->getHP(enemy->getAtaque());
        ui->PlayerHP->setText(QString::number((jeff->HP)));
        ui->attack->setEnabled(true);
        ui->magia->setEnabled(true);
        ui->finish->setDisabled(true);

        if(jeff->IQ>=4){
            ui->Message->setText("Jeff ha alcanzado 5 de IQ ahora construyo un arma poderosa!");
            ui->weapon->setVisible(true);
            ui->weapon->setEnabled(true);
        }

        if(jeff->HP<=0){
            ui->PlayerHP->setText("0");

            JeffLoss loss;
            loss.setModal(true);
            loss.exec();
            ui->attack->setDisabled(true);
            ui->magia->setDisabled(true);
            ui->finish->setDisabled(true);
        }

}

void DJeff::on_weapon_clicked()
{
    Jeff* jeff = new  Jeff(7, "Jeff", true,ui->PlayerHP->text().toInt(),ui->PlayerMagic->text().toInt(), ui->IQ->text().toInt());
        Enemy* enemy = new Enemy(ui->EnemyStoreAttack->text().toInt(), ui->EnemyStoreName->text().toStdString(), true, ui->EnemyStoreHP->text().toInt(), 0);
        int turno = 0;
        enemy->HP=0;
        ui->HPBoss->setText("0");
        ui->attack->setDisabled(true);
        ui->magia->setDisabled(true);
        ui->finish->setDisabled(true);
        ui->weapon->setDisabled(true);
        JeffWin j;
        j.setModal(true);
        j.exec();

}
