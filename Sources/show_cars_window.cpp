#include "../Headers/show_cars_window.h"
#include "ui_showcarswindow.h"

ShowCarsWindow::ShowCarsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShowCarsWindow)
{
    ui->setupUi(this);
}

ShowCarsWindow::~ShowCarsWindow()
{
    delete ui;
}