#include "Coligue.h"

Coligue::Coligue()
{
    nameorg = "undf";
    adress = "undf";
    phone = "undf";
    faks = "undf";
    contactnum = "undf";
}

Coligue::Coligue(string name, string nameorg, string adress, string phone, string faks, string contactnum) :Contact(name)
{
    this->nameorg = nameorg;
    this->adress = adress;
    this->phone = phone;
    this->faks = faks;
    this->contactnum = contactnum;
}

void Coligue::setNameOrg(string nameorg)
{
    this->nameorg = nameorg;
}

void Coligue::setAdress(string adress)
{
    this->adress = adress;
}

void Coligue::setPhone(string phone)
{
    this->phone = phone;
}

void Coligue::setFaks(string faks)
{
    this->faks = faks;
}

void Coligue::setContactNum(string contactnum)
{
    this->contactnum = contactnum;
}

string Coligue::getNameOrg() const
{
    return nameorg;
}

string Coligue::getAdress() const
{
    return adress;
}

string Coligue::getPhone() const
{
    return phone;
}

string Coligue::getFaks() const
{
    return faks;
}

string Coligue::getContactNum() const
{
    return contactnum;
}

void Coligue::showInfo() const
{
    Contact::showInfo();
    cout << "-=-=-Coligue-=-=-\n";
    cout << "Organization Name: " << nameorg << endl;
    cout << "Address: " << adress << endl;
    cout << "Phone: " << phone << endl;
    cout << "Faks: " << faks << endl;
    cout << "Contact Number: " << contactnum << endl;
}
