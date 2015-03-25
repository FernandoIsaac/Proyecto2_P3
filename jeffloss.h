#ifndef JEFFLOSS_H
#define JEFFLOSS_H

#include <QDialog>

namespace Ui {
class JeffLoss;
}

class JeffLoss : public QDialog
{
    Q_OBJECT

public:
    explicit JeffLoss(QWidget *parent = 0);
    ~JeffLoss();

private:
    Ui::JeffLoss *ui;
};

#endif // JEFFLOSS_H
