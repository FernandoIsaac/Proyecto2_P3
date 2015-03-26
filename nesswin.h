#ifndef NESSWIN_H
#define NESSWIN_H

#include <QDialog>
#include <QSound>
#include <qsound.h>
namespace Ui {
class NessWin;
}

class NessWin : public QDialog
{
    Q_OBJECT

public:
    explicit NessWin(QWidget *parent = 0);
    ~NessWin();

private:
    Ui::NessWin *ui;
};

#endif // NESSWIN_H
