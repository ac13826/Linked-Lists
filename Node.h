#include<iostream>
#include<cstring>

using namespace std;

class Student;

class Node{
 public:
  Node();
  Node* getNext();//get next Node pointer
  void setNext(Node*);//set the next pointer to the corresponding node pointer
  Node* createNode(Student*);//create a new node
  void deleteNode();//deleting the current node, including the corresponding student
  ~Node();
 protected:
  Student* s;
  Node* next;
  
};
