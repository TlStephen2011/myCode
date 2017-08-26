#include <iostream>
#include <string>
using namespace std;

class Employee {

private:
  string firstName;
  string lastName;
  float salary;

public:
  // default constructor
  Employee() {
    firstName = "";
    lastName = "";
    salary = 0;
  }
  // overloaded constructor
  Employee(string f, string l, float s) {
    firstName = f;
    lastName = l;
    salary = s;
  }
  // setters
  void setFirstName(string f) { firstName = f; }
  void setLastName(string l) { lastName = l; }
  void setSalary(float s) { salary = s; }
  // getters
  string getFirstName() { return firstName; }
  string getLastName() { return lastName; }
  float getSalary() { return salary; }
};

int main() {

  cout.setf(ios::fixed);
  cout.precision(2);

  Employee firstEmployee("Joe", "Soap", 1456.00);

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

  x = firstEmployee.getSalary();
  x *= 1.1;
  firstEmployee.setSalary(x);
  cout << "R" << firstEmployee.getSalary() << endl;

  salary *= 1.1;
  secondEmployee.setSalary(salary);
  cout << "R" << secondEmployee.getSalary() << endl;

  return 0;
}
