#include "Friend.h"

Friend::Friend()
{
    sname = "undf";
    adres = "undf";
    numph = "undf";
    data = "undf";
}

Friend::Friend(string name, string sname, string adres, string numph, string data) :Contact(name)
{
    this->sname = sname;
    this->adres = adres;
    this->numph = numph;
    this->data = data;
}

void Friend::setSurname(string sname)
{
    this->sname = sname;
}

void Friend::setAddress(string adres)
{
    this->adres = adres;
}

void Friend::setPhoneNumber(string numph)
{
    this->numph = numph;
}

void Friend::setBirthDate(string data)
{
    this->data = data;
}

string Friend::getSurname() const
{
    return sname;
}

string Friend::getAddress() const
{
    return adres;
}

string Friend::getPhoneNumber() const
{
    return numph;
}

string Friend::getBirthDate() const
{
    return data;
}

void Friend::showInfo() const
{
    Contact::showInfo();
    cout << "+++++Friend+++++\n";
    cout << "Surname: " << sname << endl;
    cout << "Address: " << adres << endl;
    cout << "Phone Number: " << numph << endl;
    cout << "Birth Date: " << data << endl;
    
}
