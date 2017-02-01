#ifndef NODE_H
#define NODE_H

#include<iostream>
#include<cstring>

using namespace std;

class Student{
 private:
  char firstname[30];
  char lastname[30];
  double gpa;
  int id;
 public:
  Student();
  
  char* getFirst();
  char* getLast();
  double getGPA();
  int getID();
};
#endif
