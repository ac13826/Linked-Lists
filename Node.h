#include<iostream>
#include<cstring>

using namespace std;

struct Student{
  char firstname[20];
  char lastname[20];
  char id[8];
  double gpa;

};

class Node{
 public:
  Node();
  void setValue(int newValue);
  int getValue();
  Node* getNext();//get next Node pointer
  void setNext(Node* newnext);//set the next pointer to the corresponding node pointer
  Node* createNode(Student*);//create a new node
  void deleteNode();//deleting the current node, including the corresponding student
  ~Node();
  void getStudent();
  void setStudent();
 protected:
  
  Node* next;
  Node* head = NULL;
  int value;
  
};
