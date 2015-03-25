#ifndef DENEMIESJEFF_H
#define DENEMIESJEFF_H

#include <QDialog>

namespace Ui {
class DEnemiesJeff;
}

class DEnemiesJeff : public QDialog
{
    Q_OBJECT

public:
    explicit DEnemiesJeff(QWidget *parent = 0);
    ~DEnemiesJeff();

private slots:
    void on_pushButton_clicked();

    void on_attack_clicked();

    void on_finish_clicked();

    void on_weapon_clicked();

private:
    Ui::DEnemiesJeff *ui;
};

#endif // DENEMIESJEFF_H
