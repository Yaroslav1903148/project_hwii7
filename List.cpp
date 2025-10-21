#include "List.h"
vector<Contact*> List::arr;

void List::addNew(Contact* obj)
{
    arr.push_back(obj);
}

void List::deleteObj(const string& name)
{
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i]->getName() == name) {
            delete arr[i];  
            arr.erase(arr.begin() + i);
            cout << "Contact \"" << name << "\" deleted.\n";
            return;
        }
    }
    cout << "Contact with name \"" << name << "\" not found.\n";
}

void List::editObj(const string& name)
{
    for (Contact* contact : arr) {
        if (contact->getName() == name) {
            string newName;
            cout << "Enter new name for contact \"" << name << "\": ";
            cin >> newName;
            contact->setName(newName);
            cout << "Contact name updated.\n";
            return;
        }
    }
    cout << "Contact with name \"" << name << "\" not found.\n";
}

void List::searchObj(const string& name)
{
    int count = 0;
    for (Contact* contact : arr) {
        if (contact->getName() == name) {
            cout << "Contact found:\n";
            contact->showInfo();
            cout << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "Contact with name \"" << name << "\" not found\n";
    else
        cout << "Found " << count << " contact(s)\n";
}

void List::showInfo() const
{
    cout << "=====List=====\n";
    for (Contact* contact : arr) {
        contact->showInfo();
    }
}
