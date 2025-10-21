#include "Person.h"

Person::Person()
{
    surname = "und";
    adress = "und";
    number = "und";
}

Person::Person(string name, string surname, string adress, string number) :Contact(name)
{
    this->surname = surname;
    this->adress = adress;
    this->number = number;
}

void Person::setSurname(string surname)
{
    this->surname = surname;
}

void Person::setAddress(string adress)
{
    this->adress = adress;
}

void Person::setNumber(string number)
{
    this->number = number;
}

string Person::getSurname() const
{
    return surname;
}

string Person::getAdress() const
{
    return adress;
}

string Person::getNumber() const
{
    return number;
}

void Person::showInfo() const
{
    Contact::showInfo();
    cout << "\n-----Person-----\n";
    cout << "Surname: " << surname << endl;
    cout << "Adress: " << adress << endl;
    cout << "Number: " << number << endl;
}
