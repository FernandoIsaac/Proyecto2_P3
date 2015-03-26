#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include <QGuiApplication>
#include <QSound>

//QSound *sound=new QSound("/home/isaac/Proyecto_P3_FIRM/music/006-_Earthbound_-_Choose_a_File.wav");

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //thread = new QThread();
    ui->play->moveToThread(thread);
    //connect(ui->play, SIGNAL(clicked()),sound,SLOT(play()));
    ui->label_2->setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    /*player = new QMediaPlayer;
    // ...
    player->setMedia(QUrl::fromLocalFile("/Users/me/Music/coolsong.mp3"));
    player->setVolume(50);
    player->play();*/


    //QSound choose("/home/isaac/Proyecto_P3_FIRM/music/006-_Earthbound_-_Choose_a_File.wav");
    //choose.play();

}


void MainWindow::on_play_clicked()
{

    //QSound *sound=new QSound("/home/isaac/Proyecto_P3_FIRM/music/006-_Earthbound_-_Choose_a_File.wav");
   // QObject::connect(ui->play,SIGNAL(clicked()),sound,SLOT(play()));

}



void MainWindow::on_play_released()
{

    Menu mm;
    mm.setModal(true);
    mm.exec();

}

void MainWindow::on_radioButton_clicked()
{   if(ui->radioButton->isChecked()){
    ui->label_2->setVisible(true);
}else{ ui->label_2->setVisible(false); }
    }
