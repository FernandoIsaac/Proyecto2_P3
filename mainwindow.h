#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QSound>
#include <QPushButton>
//#include <phonon/MediaObject>
//#include <phonon/MediaSource>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_play_clicked();

    void on_play_released();

    void on_radioButton_clicked();

private:
    Ui::MainWindow *ui;
    QThread *thread;
    QPushButton *button;

};

#endif // MAINWINDOW_H
