#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <iostream>
#include <string>
#include <vector>
#include <enemy.h>
#include <ness.h>
#include <paula.h>
#include <poo.h>
#include <QFile>
#include <jeff.h>
#include <QSound>
#include <qsound.h>
#include <QApplication>
#include "menu.h"
#include "character.h"
#include "djeff.h"
#include "dness.h"
#include "dpaula.h"
#include "dpoo.h"
#include "jeff.h"
#include "ness.h"
#include "paula.h"
#include "poo.h"
#include "paulaloss.h"
#include "paulawin.h"
#include "ness.h"
#include "nesswin.h"
#include "jeffloss.h"
#include "jeffwin.h"
#include "pooloss.h"
#include "poowin.h"
#include "mainwindow.h"

using namespace std;

int main(int argc, char *argv[])
{

    QSound title(":/004-_Earthbound_-_Title_Screen.wav");

    title.play();



    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //QSound battle(":/035-_Earthbound_-_You_Win_.wav");
    //battle.play();

    return a.exec();
}


