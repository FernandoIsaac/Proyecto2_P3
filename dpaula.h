#ifndef DPAULA_H
#define DPAULA_H

#include <QDialog>

namespace Ui {
class dPaula;
}

class dPaula : public QDialog
{
    Q_OBJECT

public:
    explicit dPaula(QWidget *parent = 0);
    ~dPaula();

private slots:
    void on_pushButton_clicked();

    void on_attack_clicked();

    void on_magia_clicked();

    void on_ataquemagica_clicked();

private:
    Ui::dPaula *ui;
};

#endif // DPAULA_H
