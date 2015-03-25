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

private:
    Ui::dPoo *ui;
};

#endif // DPOO_H
