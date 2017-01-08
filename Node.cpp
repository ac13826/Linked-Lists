#include<iostream>
#include<cstring>
#include"Node.h"

using namespace std;
Node::Node(){
  next = NULL;
}

Node* Node::getNext(){
  return next;
}

void Node::setNext(Node* newnext){
  next = newnext;
}
void Node::setStudent(){
  Student* s = new Student;
  cout << "First Name: " << endl;
  cin >> s->firstname;
  cout << s->firstname;
  cout << "Last Name: " << endl;
  cin >> s->lastname;
  cout << "ID: " << endl;
  cin >> s->id;
  cout << "GPA: " << endl;
  cin >> s->gpa; 
}
void Node::getStudent(){
  
}

void Node::setValue(int newValue){
  value = newValue;
}

int Node::getValue(){
  return value;
}

Node* Node::createNode(Student*){
  
}


void Node::deleteNode(){
}
