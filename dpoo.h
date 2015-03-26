#ifndef DPOO_H
#define DPOO_H

#include <QDialog>

namespace Ui {
class dPoo;
}

class dPoo : public QDialog
{
    Q_OBJECT

public:
    explicit dPoo(QWidget *parent = 0);
    ~dPoo();

private slots:
    void on_pushButton_clicked();

    void on_attack_clicked();

    void on_magia_clicked();

    void on_finish_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::dPoo *ui;
};

#endif // DPOO_H
