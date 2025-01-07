#include "phoneController.h"
#include <iostream>
#include <string>
using namespace std;

void showMenu()
{
    cout << "\n--- Basic PhoneBook App ---" << endl;
    cout << "1. Add Contact" << endl;
    cout << "2. Remove Contact" << endl;
    cout << "3. Search Contact" << endl;
    cout << "4. Show Contacts" << endl;
    cout << "5. Save phoneBook" << endl;
    cout << "6. Upload phoneBook" << endl;
    cout << "7. Exit" << endl;
    cout << "Choose: ";
}

int main()
{
    phoneController controller;
    int choice;
    string filename = "rehber.txt";

    do
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name;
            int number;
            cout << "Name: ";
            cin >> name;
            cout << "Number: ";
            cin >> number;
            controller.addContact(name, number);
            break;
        }
        case 2:
        {
            string name;
            cout << "Name of Contact to be deleted: ";
            cin >> name;
            controller.deleteContact(name);
            break;
        }
        case 3:
        {
            string name;
            cout << "Name of Contact for search: ";
            cin >> name;
            controller.searchContact(name);
            break;
        }
        case 4:
            controller.displayContacts();
            break;
        case 5:
            controller.saveToFile(filename);
            break;
        case 6:
            controller.loadFromFile(filename);
            break;
        case 7:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Unvalid Number (1-7)." << endl;
        }

    } while (choice != 7);

    return 0;
}
