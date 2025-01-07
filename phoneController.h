#ifndef Controller
#define Controller

#include <string>
#include "Node.h"

using namespace std;
class phoneController
{
public:
    phoneController();

    void addContact(string name, int number);
    void deleteContact(string name);
    void searchContact(string name) const;
    void displayContacts() const;

    void saveToFile(const string &filename) const;
    void loadFromFile(const string &filename);

private:
    Node *list;

    Node *findContact(string name) const;
};

#endif