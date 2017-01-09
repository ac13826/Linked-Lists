#include<iostream>
#include<cstring>

using namespace std;
class Student;

class Node{
 public:
  Node(Student* student);
  void setValue(int newValue);
  int getValue();
  Node* getNext();//get next Node pointer
  void setNext(Node* newnext);//set the next pointer to the corresponding node pointer
  //Node* createNode(Student*);//create a new node
  void deleteNode();//deleting the current node, including the corresponding student
  ~Node();
  Student* getStudent();
  Node* end();
  void erase();
  void setStudent(Student* student);
 protected:
  Student* pointer;
  Node* head = NULL;
  int value;
  Node* next;
};
