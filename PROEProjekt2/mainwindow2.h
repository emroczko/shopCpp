#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include "mainobjectshop.h"
#include "welcomeScreen.h"

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT
private:
    Shop salon;
public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

private slots:
    void on_Dodaj_samochod_clicked();

    void on_Posiadane_samochodu_clicked();

private:

    Ui::MainWindow2 *ui;

};

#endif // MAINWINDOW2_H
