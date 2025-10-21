#pragma once
#include "Contact.h"
class Coligue : public Contact
{
protected:
	string nameorg;
	string adress;
	string phone;
	string faks;
	string contactnum;
public:
	Coligue();
	Coligue(string name, string nameorg, string adress, string phone, string faks, string contactnum);

    void setNameOrg(string nameorg);
    void setAdress(string adress);
    void setPhone(string phone);
    void setFaks(string faks);
    void setContactNum(string contactnum);

    string getNameOrg() const;
    string getAdress() const;
    string getPhone() const;
    string getFaks() const;
    string getContactNum() const;

    void showInfo()const;
};

