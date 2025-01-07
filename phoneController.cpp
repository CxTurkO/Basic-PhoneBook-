#include "phoneController.h"
#include <iostream>
#include <fstream>
using namespace std;

phoneController::phoneController()
{
    list = nullptr;
}

void phoneController::saveToFile(const string &filename) const
{
    ofstream outFile(filename);
    if (!outFile)
    {
        cout << "Cannot open the file!" << endl;
        return;
    }

    Node *temp = list;
    while (temp != nullptr)
    {
        outFile << temp->getName() << " " << temp->getNumber() << endl;
        temp = temp->getNext();
    }

    outFile.close();
    cout << "Current PhoneBook is saved: " << filename << endl;
}

void phoneController::loadFromFile(const string &filename)
{
    ifstream inFile(filename);
    if (!inFile)
    {
        cout << "Cannot open the file!" << endl;
        return;
    }

    string name;
    int number;

    while (inFile >> name >> number)
    {
        addContact(name, number);
    }

    inFile.close();
    cout << "Upload the file into the phoneBook: " << filename << endl;
}

void phoneController::addContact(string name, int number)
{
    Node *newNode = new Node(name, number);

    if (!list)
    {
        list = newNode;
    }
    else
    {
        Node *temp = list;
        while (temp->getNext() != nullptr)
        {
            temp = temp->getNext();
        }
        temp->setNext(newNode);
    }
    cout << "Added person: " << name << " --- " << number << endl;
}

void phoneController::deleteContact(string name)
{
    Node *temp = list;
    Node *prev = nullptr;

    while (temp != nullptr && temp->getName() != name)
    {
        prev = temp;
        temp = temp->getNext();
    }

    if (!temp)
    {
        cout << "Not Found!" << endl;
        return;
    }

    if (!prev)
    {
        list = temp->getNext();
    }
    else
    {
        prev->setNext(temp->getNext());
    }

    delete temp;
    cout << "Deleted Person: " << name << endl;
}

void phoneController::searchContact(string name) const
{
    Node *temp = list;

    while (temp != nullptr)
    {
        if (temp->getName() == name)
        {
            cout << "Found: " << temp->getName() << " --- " << temp->getNumber() << endl;
            return;
        }
        temp = temp->getNext();
    }
    cout << "Not Found!" << endl;
}

void phoneController::displayContacts() const
{
    Node *temp = list;
    if (!temp)
    {
        cout << "Empty phoneBook" << endl;
        return;
    }

    cout << "PhoneBook:" << endl;
    while (temp != nullptr)
    {
        cout << temp->getName() << " --- " << temp->getNumber() << endl;
        temp = temp->getNext();
    }
}
