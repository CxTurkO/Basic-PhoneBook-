#ifndef NodeH
#define NodeH

#include <string>
using namespace std;

class Node
{
public:
    Node(string name, int number);

    void setNext(Node *node);

    int getNumber() const;
    string getName() const;
    Node *getNext();

private:
    Node *next;
    string name;
    int number;
};

#endif