#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include <QApplication>
#include <QSound>
namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0);
    QSound choose();

    ~Menu();

private slots:
    void on_BNess_clicked();

    void on_label_2_linkActivated(const QString &link);

    void on_BJeff_clicked();

    void on_BPoo_clicked();

    void on_BPaula_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
