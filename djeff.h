#ifndef DJEFF_H
#define DJEFF_H

#include <QDialog>

namespace Ui {
class DEnemiesJeff;
}

class DJeff : public QDialog
{
    Q_OBJECT

public:
    explicit DJeff(QWidget *parent = 0);
    ~DJeff();

private slots:
    void on_pushButton_clicked();

    void on_attack_clicked();

    void on_finish_clicked();

    void on_weapon_clicked();

private:
    Ui::DEnemiesJeff *ui;
};

#endif // DENEMIESJEFF_H
