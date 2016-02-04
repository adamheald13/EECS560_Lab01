#ifndef NODE_H
#define NODE_H

class Node
{
public:
  Node();
  Node* getNext();
  int getValue();
  void setValue(int value);
  void setNext(Node* next);

private:
  int value;
  Node* next;
};

#endif
