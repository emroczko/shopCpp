#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "addvehicle.h"
#include "dialog1.h"
#include "welcomeWindow.h"
#include "mainobjectshop.h"
MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{

    ui->setupUi(this);
    mainWindow = new MainWindow(this);
    mainWindow->show();
    mainWindow->setAttribute(Qt::WA_DeleteOnClose);

    /*MainWindow mainWindow;
    mainWindow.setModal(true);
    mainWindow.exec();*/


    Shop salon(1000);
    if(mainWindow->on_pushButton_pressed()==true){
        mainWindow->hide();
        this->show();
    }



}

MainWindow2::~MainWindow2()
{
    delete ui;
    delete mainWindow;
}
void MainWindow2::on_Dodaj_samochod_clicked()
{
    AddVehicle add;
    add.setModal(true);
    add.exec();

}

void MainWindow2::on_Posiadane_samochodu_clicked()
{
    Dialog1 dial;
    dial.setModal(true);
    dial.exec();
}
