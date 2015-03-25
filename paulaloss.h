#ifndef PAULALOSS_H
#define PAULALOSS_H

#include <QDialog>

namespace Ui {
class PaulaLoss;
}

class PaulaLoss : public QDialog
{
    Q_OBJECT

public:
    explicit PaulaLoss(QWidget *parent = 0);
    ~PaulaLoss();

private:
    Ui::PaulaLoss *ui;
};

#endif // PAULALOSS_H
