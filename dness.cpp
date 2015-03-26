#include "dness.h"
#include "ui_dness.h"
#include <QApplication>
#include <QLabel>
#include "ness.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <QTextStream>
#include <QDebug>
#include <QFile>
#include <nesswin.h>
#include <nessloss.h>
#include <QSound>
#include <qsound.h>
#include "enemy.h"

using std::string;
using std::vector;
using std::ctime;
using std::srand;

//Enemy* GuardarEnemigo(Enemy);

DNess::DNess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DEnemy)
{
    ui->setupUi(this);
}

DNess::~DNess()
{
    delete ui;
}

void DNess::on_pushButton_clicked()
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
    //myImage.load("/home/isaac/Desktop/Sprites/Ness.png");
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
    ui->l5->setVisible(false);
    /*bossattack, bossname, true, bossHP, 0)*/
    ui->EnemyStoreAttack->setText(QString::number(enemigos[random]->ataque));
    ui->EnemyStoreName->setText(QString::fromStdString(enemigos[random]->name));
    ui->EnemyStoreHP->setText(QString::number(enemigos[random]->HP));
    Ness* ness = new Ness(15, "Ness", true, 260, 10);
    ui->PlayerHP->setText(QString::number(ness->HP));
    ui->PlayerMagic->setText(QString::number(ness->magic));
    myLabel.show();
    QSound title(":/033-_Earthbound_-_Battle_Against_a_Weird_Opponent.wav");
    title.play();
    //ui->PlayerHP->setText(QString::number());

}


void DNess::on_attack_clicked()
{
    Ness* ness = new Ness(15, "Ness", true,ui->PlayerHP->text().toInt(),ui->PlayerMagic->text().toInt());
    Enemy* enemy = new Enemy(ui->EnemyStoreAttack->text().toInt(), ui->EnemyStoreName->text().toStdString(), true, ui->EnemyStoreHP->text().toInt(), 0);


    int turno = 0;
    ui->Message->setText("Ness Ataco!");
    //enemy->HP = enemy->getHP()- ness->getAtaque();
    enemy->HP = enemy->getHP(ness->getAtaque());
    ui->HPBoss->setText(QString::number(enemy->HP));
    ui->EnemyStoreHP->setText(QString::number(enemy->HP));

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
        ui->HPBoss->setText("0");
        NessWin gano;
        gano.setModal(true);
        gano.exec();
        QSound title(":/035-_Earthbound_-_You_Win_.wav");
        title.play();
        ui->attack->setDisabled(true);
        ui->magia->setDisabled(true);
        ui->finish->setDisabled(true);

    }

}




void DNess::on_magia_clicked()
{
    int turno = 0;

    Ness* ness = new Ness(15, "Ness", true,ui->PlayerHP->text().toInt(),ui->PlayerMagic->text().toInt());
    ui->Message->setText("Ness Uso Magia para Regenerar su vida!");

    if(ness->magic>0){
        ness->magic = ness->getMagic();
        ness->HP = 260;
    }
    else{
        ui->Message->setText("No Tienes suficiente magia!");
    }
    ui->PlayerMagic->setText(QString::number(ness->magic));
    ui->PlayerHP->setText(QString::number(ness->HP));
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

}

void DNess::on_finish_clicked()
{
    Ness* ness = new Ness(15, "Ness", true,ui->PlayerHP->text().toInt(),ui->PlayerMagic->text().toInt());
    Enemy* enemy = new Enemy(ui->EnemyStoreAttack->text().toInt(), ui->EnemyStoreName->text().toStdString(), true, ui->EnemyStoreHP->text().toInt(), 0);
    ui->Message->setText("El Enemigo ha Atacado!");
    //ness->HP=ness->getHP() - enemy->getAtaque();
    ness->HP=ness->getHP(enemy->getAtaque());
    ui->PlayerHP->setText(QString::number(ness->HP));
    ui->attack->setEnabled(true);
    ui->magia->setEnabled(true);
    ui->finish->setDisabled(true);
    if(ness->HP<=0){
        ui->PlayerHP->setText("0");
        NessLoss loss;
        loss.setModal(true);
        loss.exec();
        ui->attack->setDisabled(true);
        ui->magia->setDisabled(true);
        ui->finish->setDisabled(true);

    }

}
