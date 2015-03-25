#ifndef POOLOSS_H
#define POOLOSS_H

#include <QDialog>

namespace Ui {
class PooLoss;
}

class PooLoss : public QDialog
{
    Q_OBJECT

public:
    explicit PooLoss(QWidget *parent = 0);
    ~PooLoss();

private:
    Ui::PooLoss *ui;
};

#endif // POOLOSS_H
