//Linked Lists: add, print, and remove student
//My Last Project of C++ :( T_T, enjoyed it until last week
//Will reattempt to learn coding in the future
#include<iostream>
#include "Node.h"
#include "Student.h"
using namespace std;



void addstudent(Node* n, Student* compareid);
void printstudent(Node* n);
void removestudent(Node* currentNode, Node* previous, int id);
void averagestudent(Node* n, double total, int counter);

int main(){
  bool running = true;
  char input[30];
  Node* n = new Node(NULL);
 

  while(running == true){
    Node* currentNode = NULL;
    cout << "What would you like to do?" << endl;
    cout << "Type add, print, or delete (or quit)" << endl;
    cin.get(input, 30);
    cin.ignore();
    if((strcmp(input, "add"))==0){
      cout << "HERRO" << endl;
      addstudent(n, new Student);
     
    }
    if((strcmp(input, "print"))==0){
      
      printstudent(n->getNext());
      
    }
    if((strcmp(input, "delete"))==0){
      int id;
      cout << "Please input the ID of the student you would like to remove" << endl;
      cin >> id;
      cin.ignore();
      removestudent(n->getNext(), n, id);
    }
    if((strcmp(input, "average"))==0){
      averagestudent(n->getNext(), 0, 0);
    }
    if((strcmp(input, "quit"))==0){
      cout << "i hate life" << endl;
      running = false;
    }

  }
}

void addstudent(Node* n, Student* compareid){//adding to the node list
  cout << "hey" << endl;
  
  /*Node* currentNode = n;
  Node* h = new Node(new Student);
  h->setNext(n);
  n= h;
  cout << "this sucks" << endl;
  return;*/
  
  if(n->getNext() == NULL){
    n->setNext(new Node(compareid));

  }
  else if(n->getNext()->getStudent()->getID() > compareid->getID()){
    Node* temp = n->getNext();
    n->setNext(new Node(compareid));
    n->getNext()->setNext(temp);
  }
  else{
    n = n->getNext();
    addstudent(n, compareid);
  }

  /*
  if(n == NULL){
    cout << "1" << endl;
    Node* h = new Node(new Student);
    h->setNext(n);
    n = h;
  }
  else{
    cout << "2" << endl;
    if(n->getNext() != NULL){
      cout << "3" << endl;
      n = n->getNext();
      addstudent(n);
    }
    else{
      cout << "4" << endl;
      Node* h = new Node(new Student);
      h->setNext(n);
      n = h;
    }
    }*/
}

void printstudent(Node* n){//printing the list
  cout << "--------------------------------------------------" << endl;
  Node* currentNode = n;
  if(!n){return;}
    cout << "Name: " << n->getStudent()->getFirst() << " " << n->getStudent()->getLast() << endl;
    cout << "ID: " << n->getStudent()->getID() << endl;
    cout << "GPA: " << n->getStudent()->getGPA() << endl;
   
  
  
  if(n->getNext()){
    printstudent(n->getNext());
    
  }
  /*  else{
    cout << "this is the last one" << endl;
    return;
    }*/
  
  /*for(Node* currentNode = n; currentNode!= NULL; currentNode = currentNode->getNext()){
    cout << "hi" << endl;
    if(currentNode->getStudent() != NULL){
      cout << "Name: " << currentNode->getStudent()->getFirst() << " " << currentNode->getStudent()->getLast() << endl;
      cout << "ID: " << currentNode->getStudent()->getID() << endl;
      cout << "GPA: " << currentNode->getStudent()->getGPA() << endl;
      
    }
  }*/

  cout << "---------------------------------------------------"<< endl;
}

void removestudent(Node* currentNode, Node* previous, int id){//deleting from the list
 
  
  Node* deletepointer = NULL;
 

  
  if(currentNode->getStudent()->getID() == id){
    previous->setNext(currentNode->getNext());
    delete currentNode;
  }
  else if(currentNode->getNext()){
    removestudent(currentNode->getNext(), currentNode, id);
  }
  else{
    cout << "none with that ID" << endl;
  }

}
  /*for(Node* currentNode = n; currentNode != NULL; currentNode = currentNode->getNext()){
    if(id == currentNode->getStudent()->getID()){
      currentNode->erase();
      }

  }

}*/
void averagestudent(Node* n, double total, int counter){//averaging the GPAs
 
  cout << "hello" << endl;
  total = total + n->getStudent()->getGPA();
  counter++;
 
  if(n->getNext()){
    cout << "bye" << endl;
    averagestudent(n->getNext(), total, counter);
   
  }
  else{
    cout << total/counter << endl;
  }
  

  /* for(Node* currentNode = n; currentNode != NULL; currentNode = currentNode->getNext()){
    counter++;
    total += currentNode->getStudent()->getGPA();
  } 
  cout << total/counter << endl;
  cout << "hello" << endl;

}*/
}
  /* Student* s1 = new Student(1);
  Student* s2 = new Student(2);
  Student* s3 = new Student(5);

  Node* header = new Node(s1);
  header->setStudent(s2);
  header->setStudent(s3);

  // cout << header->end()->getStudent()->getgpa() << endl;

  for (Node* current = header; current->getNext() !=NULL; current = current->getNext()){
    cout << current->getStudent()->getgpa()<< endl;
  }
  cout << header->end()->getStudent()->getgpa() << endl;
  }*/

/*void addstudent(Student* n){
  Node* n = new Node();
  cout << "Name: " << endl;

  }*/


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
