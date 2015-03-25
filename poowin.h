#ifndef POOWIN_H
#define POOWIN_H

#include <QDialog>

namespace Ui {
class PooWin;
}

class PooWin : public QDialog
{
    Q_OBJECT

public:
    explicit PooWin(QWidget *parent = 0);
    ~PooWin();

private:
    Ui::PooWin *ui;
};

#endif // POOWIN_H
