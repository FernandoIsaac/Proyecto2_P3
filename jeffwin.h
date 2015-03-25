#ifndef JEFFWIN_H
#define JEFFWIN_H

#include <QDialog>

namespace Ui {
class JeffWin;
}

class JeffWin : public QDialog
{
    Q_OBJECT

public:
    explicit JeffWin(QWidget *parent = 0);
    ~JeffWin();

private:
    Ui::JeffWin *ui;
};

#endif // JEFFWIN_H
