#include "mainwindow.h"
#include <QApplication>
#include "car.h"
#include "mainobjectshop.h"
#include "addvehicle.h"

int main(int argc, char *argv[])
{
   Shop salon;
   cout<<salon;
    /*
    vector<Vehicle*> vehicles;
    vehicles.emplace_back(Vehicle::makeVehicle(1, "dsjcns", 7597494, 43287529, condition::USED, engine::GASOLINE ));       // Taki test czy to działa jakoś sensownie
    vehicles.emplace_back(Vehicle::makeVehicle(1,"mkfdvnf", 500000, 439327, condition::NEW, engine::DIESEL));


    cout<<vehicles.at(1)->Get_Model()<<endl<<vehicles.at(1)->Get_Price()<<endl<<vehicles.at(1)->Get_ID()<<endl<<endl;
    */
    //a z tąd można wziąć operator <<

   // salon+=
    //Car car2;


    //salon+=AddVehicle::on_Akceptuj_clicked();
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);
    MainWindow w;
    w.show();

    return a.exec();
}
