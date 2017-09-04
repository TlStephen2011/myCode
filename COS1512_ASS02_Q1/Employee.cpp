#include "Employee.h"
#include <iostream>
#include <string>

using namespace std;

// default constructor
Employee::Employee() {
  firstName = "";
  lastName = "";
  salary = 0;
}

// overloaded constructor
Employee::Employee(string f, string l, float s) {
  firstName = f;
  lastName = l;
  salary = s;
}

// mutators
void Employee::setFirstName(string f) { firstName = f; }

void Employee::setLastName(string l) { lastName = l; }

void Employee::setSalary(float s) { salary = s; }

// accessors
string Employee::getFirstName() { return firstName; }

string Employee::getLastName() { return lastName; }

float Employee::getSalary() { return salary; }
