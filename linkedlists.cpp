#include<iostream>
#include "Node.h"

using namespace std;


class Student{
  int id;
};

int main(){


}


/*void add(Student* newpointer);
//void add(int newValue);
void print(Node* next);

Node* head = NULL;

int main(){
  char start[30];
  cout << "What would you like to do?" << endl;
  cout << "'add' to add a student into the list, 'print' to see the list, 'delete' if you want to remove a name" << endl;
  cin >> start;
  if(strcmp(start, "add") == 0){//which way?
    //add(1);
  }
  else if(strcmp(start, "print") == 0){
    print(head);
  }
  else if(strcmp(start, "delete") == 0){
    //  deletename(list);
  }
  Student * s = new Student();
  add(s);
  print(head);
  
  print(head);/*
  add(5);
  print(head);
  add(7);
  print(head);
  add(6);
  print(head);*/
  

//}
//void add(int newValue){
/*void add(Student* newpointer){
  Node* current = head;
  if(current == NULL){
    head = new Node();
    //head->setValue(newValue);
    //cout << head->getValue();
    head->setStudent(newpointer);
  }
  else{
    while (current->getNext() != NULL){
      current = current->getNext();
    }
    current->setNext(new Node());
    //current->getNext()->setValue(newValue);
    current->getNext()->setStudent(newpointer);
    
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
*/
