#include <iostream>
#include "Contact.h"
#include "Person.h"
#include "Friend.h"
#include "Coligue.h"
#include "List.h"

using namespace std;

int main()
{
    List contactList;
    int choice;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add Friend\n";
        cout << "2. Add Colleague\n";
        cout << "3. Add Person\n";
        cout << "4. Show All Contacts\n";
        cout << "5. Search by Name\n";
        cout << "6. Delete\n";
        cout << "7. Edit\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name, sname, address, phone, birth;
            cout << "Enter name: "; cin >> name;
            cout << "Enter surname: "; cin >> sname;
            cout << "Enter address: "; cin >> address;
            cout << "Enter phone: "; cin >> phone;
            cout << "Enter birth date: "; cin >> birth;

            Friend* f = new Friend(name, sname, address, phone, birth);
            contactList.addNew(f);

        }
        else if (choice == 2) {
            string name, org, addr, phone, fax, contact;
            cout << "Enter name: "; cin >> name;
            cout << "Enter organization: "; cin >> org;
            cout << "Enter address: "; cin >> addr;
            cout << "Enter phone: "; cin >> phone;
            cout << "Enter fax: "; cin >> fax;
            cout << "Enter contact person: "; cin >> contact;

            Coligue* c = new Coligue(name, org, addr, phone, fax, contact);
            contactList.addNew(c);

        }
        else if (choice == 3) {
            string name, sname, addr, phone;
            cout << "Enter name: "; cin >> name;
            cout << "Enter surname: "; cin >> sname;
            cout << "Enter address: "; cin >> addr;
            cout << "Enter phone: "; cin >> phone;

            Person* p = new Person(name, sname, addr, phone);
            contactList.addNew(p);

        }
        else if (choice == 4) {
            contactList.showInfo();

        }
        else if (choice == 5) {
            string name;
            cout << "Enter name to search: ";
            cin >> name;
            contactList.searchObj(name);

        }
        else if (choice == 6) {
            string name;
            cout << "Enter name of contact to delete: ";
            cin >> name;
            contactList.deleteObj(name);
        }
        else if (choice == 7) {
            string name;
            cout << "Enter name of contact to edit: ";
            cin >> name;
            contactList.editObj(name);
        }
        else if (choice == 8) {
            break;

        }
        else {
            cout << "Invalid choice!\n";
        }
    }


}
