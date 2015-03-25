#ifndef DNESS_H
#define DNESS_H

#include <QDialog>

namespace Ui {
class DNess;
}

class DNess : public QDialog
{
    Q_OBJECT

public:
    explicit DNess(QWidget *parent = 0);
    ~DNess();

private:
    Ui::DNess *ui;
};

#endif // DNESS_H
