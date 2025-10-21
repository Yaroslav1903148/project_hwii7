#include "Contact.h"

Contact::Contact()
{
    name = "und";
}

Contact::Contact(string name)
{
    this->name = name;
}

void Contact::setName(string name)
{
    this->name = name;
}

string Contact::getName() const
{
    return name;
}

void Contact::showInfo() const
{
    cout << "=====Contact=====\n";
    cout << "Name: " << name<<endl;
}
