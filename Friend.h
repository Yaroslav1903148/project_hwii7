#pragma once
#include "Contact.h"
class Friend : public Contact
{
protected:
	string sname;
	string adres;
	string numph;
	string data;
public:
    Friend();
    Friend(string name, string sname, string adres, string numph, string data);

   
    void setSurname(string sname);
    void setAddress(string adres);
    void setPhoneNumber(string numph);
    void setBirthDate( string data);

    string getSurname() const;
    string getAddress() const;
    string getPhoneNumber() const;
    string getBirthDate() const;

    void showInfo()const;
};

