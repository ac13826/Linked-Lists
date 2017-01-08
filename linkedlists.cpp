#include<iostream>
#include "Node.h"

using namespace std;

//void add();
void add(int newValue);
void print(Node* next);

Node* head = NULL;

int main(){
  
  //add();
  //print(head);
  //add();
  // print(head);
  add(5);
  print(head);
  add(7);
  print(head);
  add(6);
  print(head);
  

}
void add(int newValue){
//void add(){
  Node* current = head;
  if(current == NULL){
    head = new Node();
    head->setValue(newValue);
    //head->setStudent();
  }
  else{
    while (current->getNext() != NULL){
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setValue(newValue);
    //current->getNext()->setStudent(firstname);
  }

}

void print(Node* next){
  if(next == head){
    cout << "list: ";
  }
  if(next != NULL){
    cout << next->getValue() << " ";
    print(next->getNext());
  }
  else{
  }

}
