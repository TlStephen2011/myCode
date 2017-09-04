#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
 private:
  string firstName;
  string lastName;
  float salary;

 public:
  // default constructor
  Employee();
  // overloaded constructor
  Employee(string f, string l, float s);
  // mutators
  void setFirstName(string f);
  void setLastName(string l);
  void setSalary(float s);
  // accessors
  string getFirstName();
  string getLastName();
  float getSalary();
};

#endif  // EMPLOYEE_H
