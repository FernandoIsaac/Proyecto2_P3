#ifndef PAULAWIN_H
#define PAULAWIN_H

#include <QDialog>

namespace Ui {
class PaulaWin;
}

class PaulaWin : public QDialog
{
    Q_OBJECT

public:
    explicit PaulaWin(QWidget *parent = 0);
    ~PaulaWin();

private:
    Ui::PaulaWin *ui;
};

#endif // PAULAWIN_H
