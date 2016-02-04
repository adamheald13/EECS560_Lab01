#include "Node.h"

Node::Node()
{
  next = 0;
}

Node* Node::getNext()
{
  return next;
}

int Node::getValue()
{
  return value;
}

void Node::setNext(Node* next)
{
  this->next = next;
}

void Node::setValue(int value)
{
  this->value = value;
}
