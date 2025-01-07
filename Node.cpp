#include "Node.h"

Node::Node(string name, int number)
{
    this->name = name;
    this->number = number;
    this->next = nullptr;
}

void Node::setNext(Node *node)
{
    Node *temp = this;
    temp->next = node;
}

int Node::getNumber() const
{
    return this->number;
}

string Node::getName() const
{
    return this->name;
}
Node *Node::getNext()
{
    return this->next;
}
