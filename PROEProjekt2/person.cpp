#include "person.h"

shared_ptr<Person> Person::makeMechanic(string name, string surname, unsigned int money, string spec)
{
    return shared_ptr<Person>(new Mechanic(name, surname, money, spec));
}
shared_ptr<Person> Person::makeSalesman(string name, string surname, unsigned int money, unsigned int exp)
{
    return shared_ptr<Person>(new Salesman(name, surname, money, exp));
}
string Mechanic::Get_Name() const {return name_;}
string Mechanic::Get_Surname() const {return surname_;}
unsigned int Mechanic::Get_Salary() const {return salary_;}
ostream& Mechanic::print(ostream &os) const
{
    os<<"Imie: "<<Get_Name()<<"  Nazwosko: "<<Get_Surname()<<"  Salary: "<<Get_Salary()<<"  Specializacja: "<<specialization_;
    return os;
}
string Salesman::Get_Name() const  {return name_;}
string Salesman::Get_Surname() const {return surname_;}
unsigned int Salesman::Get_Salary() const {return salary_;}
ostream& Salesman::print(ostream &os) const
{
    os<<"Imie: "<<Get_Name()<<"  Nazwosko: "<<Get_Surname()<<"  Salary: "<<Get_Salary()<<"  Doświadczenie(lata): "<<experience_;
    return os;
}
