#ifndef DNESS_H
#define DNESS_H

#include <QDialog>

namespace Ui {
class DEnemy;
}

class DNess : public QDialog
{
    Q_OBJECT

public:
    explicit DNess(QWidget *parent = 0);
    ~DNess();

private slots:
    void on_pushButton_clicked();

    void on_attack_clicked();

    void on_magia_clicked();

    void on_finish_clicked();

private:
    Ui::DEnemy *ui;
};

#endif // NESS_H
