#include <iomanip>
#include<iostream>
#include<cstring>
#include "Student.h"

using namespace std;

Student::Student(){
  
  cout << "What is your student's first name?" << endl;
  cin >> firstname;
  if(strlen(firstname) == 1){
    cout << "don't be lazy, give an actual name smh" << endl;

  }

  cout << "What is his last name?" << endl;
  cin >> lastname;
  if(strlen(firstname) == 1){
    cout << "don't be lazy, give an actual name smh" << endl;
  }
  cout << "What is his student ID?" << endl;
  cin >> id;
  
  cout << "What is his GPA?" << endl;
  cin >> gpa;
  cin.ignore();
  if(gpa < 3.00){
    cout << "That sucks, it's almost as bad as Austin's... (especially after he failed C++)" << endl;

  }
  cout << "His name is " << firstname << " " << lastname << endl;
  cout << "His ID is " << id << " and his GPA is " << setprecision(2) << fixed << gpa << endl;
  
  

}


//getting the data for the student class
char* Student::getFirst(){
  return firstname;
}
char* Student::getLast(){
  return lastname;
}
double Student::getGPA(){
  return gpa;
}
int Student::getID(){
  return id;
}
