#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "Contact.h"
#include "Person.h"
#include "Friend.h"
#include "Coligue.h"

using namespace std;

class List
{
protected:
    static vector<Contact*> arr;  

public:
    void addNew(Contact* obj);
    void deleteObj(const string& name);
    void editObj(const string& name);
    void searchObj(const string& name);
    void showInfo() const;
};
