#include <iostream>
#include <fstream>
#include <string>
#include "Node.h"
using namespace std;

Node* readFile()
{
  int num;

  ifstream dataFile ("data.txt");

  Node* previousNode = 0;
  Node* firstNode = 0;

  if(dataFile.is_open())
  {
    cout << "---------- List read in from file: ----------" << endl;
    while (dataFile >> num)
    {
      Node* node = new Node();
      node->setValue(num);

      if(previousNode != 0)
      {
        previousNode->setNext(node);
      } else
        firstNode = node;

      previousNode = node;
      cout << node->getValue() << " ";
    }
    dataFile.close();
  } else
    cout << "unable to open file" << endl;

  cout << endl << endl;

  return firstNode;
}

Node* reverseList(Node* firstElement)
{
  Node* previous = 0;
  Node* current = firstElement;
  Node* next = firstElement->getNext();
  Node* tmp = 0;

  while(next->getNext() != 0)
  {
    current->setNext(previous);

    previous = current;
    current = next;
    next = next->getNext();
  }
  current->setNext(previous);
  next->setNext(current);

  return next;
}

void printReversedList(Node* reversedFirst)
{
  cout << "---------- Reversed List ----------" << endl;

  while(reversedFirst != 0)
  {
    cout << reversedFirst->getValue() << " ";
    reversedFirst = reversedFirst->getNext();
  }
}

int main()
{
  Node* firstNode = readFile();
  Node* reversedFirst = reverseList(firstNode);
  printReversedList(reversedFirst);
}
