#pragma once
#include <iostream>
#include <string>
using namespace std;
class Contact
{
protected:
	string name;
public:
	Contact();
	Contact(string name);

	void setName(string name);
	string getName()const;

	virtual void showInfo()const;
};

