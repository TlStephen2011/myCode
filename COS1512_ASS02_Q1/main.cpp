#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(2);

  // First employee created with desired specs.
  Employee firstEmployee("Joe", "Soap", 1456.00);

  // Create second employee with data from the keyboard
  string firstName;
  string lastName;
  float salary;
  cout << "Enter the details for the employee." << endl;
  cout << "First name: ";
  cin >> firstName;
  cout << "Last name: ";
  cin >> lastName;
  cout << "Salary: ";
  cin >> salary;
  cout << endl << endl;

  Employee secondEmployee(firstName, lastName, salary);

  float x;

  // Give each employee a 10% raise.
  x = firstEmployee.getSalary();
  x *= 1.1;
  firstEmployee.setSalary(x);

  salary *= 1.1;
  secondEmployee.setSalary(salary);

  // Display each employee's new details.
  cout << "Employee Name: "
       << firstEmployee.getFirstName() + " " + firstEmployee.getLastName()
       << endl;
  cout << "Salary : "
       << "R" << firstEmployee.getSalary() << endl
       << endl;
  cout << "Employee Name: "
       << secondEmployee.getFirstName() + " " + secondEmployee.getLastName()
       << endl;
  cout << "Salary: "
       << "R" << secondEmployee.getSalary() << endl
       << endl;

  return 0;
}
