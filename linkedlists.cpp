//Linked Lists: add, print, and remove student
//My Last Project of C++ :( T_T, enjoyed it until last week
//Will reattempt to learn coding in the future
#include<iostream>
#include "Node.h"
#include "Student.h"
using namespace std;



void addstudent(Node* &n);
void printstudent(Node* &n);
void removestudent(Node* &n);
void averagestudent(Node* &n);

int main(){
  bool running = true;
  char input[30];
  Node* n = NULL;
 

  while(running == true){
    
    cout << "What would you like to do?" << endl;
    cout << "Type add, print, or delete (or quit)" << endl;
    cin.get(input, 30);
    cin.ignore();
    if((strcmp(input, "add"))==0){
      cout << "HERRO" << endl;
      addstudent(n);
     
    }
    if((strcmp(input, "print"))==0){
      
      printstudent(n);
      
    }
    if((strcmp(input, "delete"))==0){
   
      removestudent(n);
    }
    if((strcmp(input, "average"))==0){
      averagestudent(n);
    }
    if((strcmp(input, "quit"))==0){
      cout << "i hate life" << endl;
      running = false;
    }

  }
}

void addstudent(Node* &n){//adding to the node list
  cout << "hey" << endl;
  Node* currentNode = n;
  /*if(n->getNext() != NULL){
    n = n->getNext();
    addstudent(n);
  }
  else{
    n->setNext(new Node(new Student));

  }*/
  
  /*if(n != NULL){
    if(n->getNext() != NULL){
      cout << "nope" << endl;
      n= n->getNext();     
      addstudent(n);
    }
    else{
      cout << "does it work? " << endl;
      
      //      Node* h = new Node(new Student);
      
      n->setNext(new Node(new Student));
      
      cout << "this sucks" << endl;
      return;
    }
  }
  else{
    cout << "surprise" << endl;
    Node* h = new Node(new Student);
    n = h;
    return;
   
  }*/
    
  Node* current = n;
  Node* h = new Node(new Student);

  h->setNext(n);
  n= h;
  cout << "this sucks" << endl;

  
}

void printstudent(Node* &n){//printing the list
  cout << "--------------------------------------------------" << endl;
  
  
  Node* currentNode = n;
  Node* temp = currentNode;
  /*if(n != NULL){
    cout << "Name: " << n->getStudent()->getFirst() << " " << n->getStudent()->getLast() << endl;
    cout << "ID: " << n->getStudent()->getID() << endl;
    cout << "GPA: " << n->getStudent()->getGPA() << endl;
    if(n->getNext() != NULL && n->getStudent() != NULL){
      n = n->getNext();
      printstudent(n);
    }
  
    else{
      n = n->getNext();
      
    }
  }
  else{
    cout << "none in the list" << endl;
    return;
    
    }*/

  for(Node* currentNode = n; currentNode!= NULL; currentNode = currentNode->getNext()){
    cout << "hi" << endl;
    // if(currentNode->getStudent() != NULL){
      cout << "Name: " << currentNode->getStudent()->getFirst() << " " << currentNode->getStudent()->getLast() << endl;
      cout << "ID: " << currentNode->getStudent()->getID() << endl;
      cout << "GPA: " << currentNode->getStudent()->getGPA() << endl;
      
      //}
      }
  /*if(n != NULL){
    Node* currentNode = n;
    cout << "Name: " << currentNode->getStudent()->getFirst() << " " << currentNode->getStudent()->getLast() << endl;
    cout << "ID: " << currentNode->getStudent()->getID() << endl;
    cout << "GPA: " << currentNode->getStudent()->getGPA() << endl;
    return;
  }
  if(n->getNext()!= NULL){
    n->getNext();
    printstudent(n->getNext());


    }*/
  cout << "---------------------------------------------------"<< endl;
}

void removestudent(Node* &n){//deleting from the list
 
  int id;
  Node* deletepointer = NULL;
  cout << "Please input the ID of the student you would like to remove" << endl;
  cin >> id;
  cin.ignore();
  Node* currentNode = n;
  Node* previous = NULL;
 
  if(id == n->getStudent()->getID()){
    n = n->getNext();
  }
  while(currentNode != NULL){
    if(id == currentNode->getStudent()->getID()){
      cout << "match" << endl;
      
      if(previous != NULL){
	cout << "yes" << endl;
	previous->setNext(currentNode->getNext());
	
      }
      cout << "check" << endl;
      currentNode = NULL;
      deletepointer = currentNode;
      delete(deletepointer);
      break;
      cout << "hey" << endl;
    }
    
    previous = currentNode;
    currentNode = currentNode->getNext();
    
  }

}
  /*for(Node* currentNode = n; currentNode != NULL; currentNode = currentNode->getNext()){
    if(id == currentNode->getStudent()->getID()){
      currentNode->erase();
      }

  }

}*/
void averagestudent(Node* &n){//averaging the GPAs
  double total = 0;
  double counter;
  for(Node* currentNode = n; currentNode != NULL; currentNode = currentNode->getNext()){
    counter++;
    total += currentNode->getStudent()->getGPA();
  } 
  cout << total/counter << endl;
  cout << "hello" << endl;

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
