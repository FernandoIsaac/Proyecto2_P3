#ifndef DENEMY_H
#define DENEMY_H

#include <QDialog>

namespace Ui {
class DEnemy;
}

class DEnemy : public QDialog
{
    Q_OBJECT

public:
    explicit DEnemy(QWidget *parent = 0);
    ~DEnemy();

private slots:
    void on_pushButton_clicked();

    void on_attack_clicked();

    void on_magia_clicked();

    void on_finish_clicked();

private:
    Ui::DEnemy *ui;
};

#endif // DENEMY_H
