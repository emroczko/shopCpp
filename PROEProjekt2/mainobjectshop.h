#pragma once
#include <vector>
#include "locations.h"
#include "employee.h"
#include "car.h"
#include "customer.h"



using namespace std;

class Shop
{
private:
    int income_;
    vector < Employee > Personnel_;
    vector < Vehicle* >Assortment_;


public:
    Shop();
    Shop(int income_);
    Shop(int income_, vector < Vehicle* >Assortment, vector < Employee > Personnel);
    Shop(const Shop& shop);
    ~Shop();

    void saveToFile(const Shop & shop);
    void loadFromFile();
    friend ostream& operator<< (ostream& ,const Shop&);

    bool operator == (const Shop &shop); //porownuje przychod placowki
    bool operator > (const Shop &shop); //porownuje przychod placowki
    bool operator < (const Shop &shop); //porownuje przychod placowki
    Shop & operator += (const Employee& employee); // dodaje pracownika do sklepu
    Shop & operator += (const Shop &shop); //łączy dwie placówki
    Shop & operator += (Vehicle *car_); // dodaje auto do salonu
    Shop & operator -- (); // usuwa ostatnie auto
    Shop & operator ()(const Customer& customer, int whichCar);//klient kupuje auto o nr podanym indeksie wektora
    Shop & operator ()(const Customer& customer, string whichCar);//klient kupuje auto danym modelu
    string operator [] (unsigned int number);//pokazuje wybrane (po indeksie) auto z placowki

};
