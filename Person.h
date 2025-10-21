#pragma once
#include "Contact.h"
class Person : public Contact
{
protected:
	string surname;
	string adress;
	string number;
public:
	Person();
	Person(string name, string surname, string adress, string number);

	void setSurname(string surname);
	void setAddress(string adress);
	void setNumber(string number);

	string getSurname()const;
	string getAdress()const;
	string getNumber()const;


	void showInfo()const;
};

