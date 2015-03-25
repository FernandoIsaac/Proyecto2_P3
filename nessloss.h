#ifndef NESSLOSS_H
#define NESSLOSS_H

#include <QDialog>

namespace Ui {
class NessLoss;
}

class NessLoss : public QDialog
{
    Q_OBJECT

public:
    explicit NessLoss(QWidget *parent = 0);
    ~NessLoss();

private:
    Ui::NessLoss *ui;
};

#endif // NESSLOSS_H
