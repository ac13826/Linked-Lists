#include<iostream>
#include<cstring>
#include"Node.h"

using namespace std;
Node::Node(Student* student){
  pointer = student;
}
Node::~Node(){
  delete &pointer;
  next = NULL;
}

Node* Node::getNext(){
  return next;
}

void Node::setNext(Node* newnext){
  next = newnext;
}
void Node::setStudent(Student* student){
  Node* current = this;
  for(current; current->getNext() != NULL; current = current->getNext());
  current->setNext(new Node(student));
}
Student* Node::getStudent(){
  return pointer;
}

void Node::setValue(int newValue){
  value = newValue;
}

int Node::getValue(){
  return value;
}
void Node::erase(){
  if(next){
    next->erase();
    delete this;

  }
  delete &pointer;
}
Node* Node::end(){
  Node* current = this;
  for(current; current->getNext() != NULL; current = current->getNext());
  return current;

}
//Node* Node::createNode(Student*){
  
//}


void Node::deleteNode(){
}
