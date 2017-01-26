
#include<iostream>
#include<cstring>
#include "Student.h"

using namespace std;

Student::Student(){
  cout << "What is your student's first name?" << endl;
  cin >> firstname;

  cout << "What is his last name?" << endl;
  cin >> lastname;
  cout << "What is his student ID?" << endl;
  cin >> id;
  cout << "What is his GPA?" << endl;
  cin >> gpa;
  cin.ignore();
  cout << "His name is " << firstname << " " << lastname << endl;
  cout << "His ID is " << id << " and his GPA is " << gpa << endl;
  
  

}

char* Student::getFirst(){
  return firstname;
}
char* Student::getLast(){
  return lastname;
}
float Student::getGPA(){
  return gpa;
}
int Student::getID(){
  return id;
}
