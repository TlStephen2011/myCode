#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student() {
  studentName = "";
  ID = 0;
  studentNumber = 0;
  diplomaName = "";
  averageMark = 0;
  for (int i = 0; i < 5; i++) {
    modules[i] = "";
    results[i] = 0;
  }
}

Student::~Student() { cout << "Bye!" << endl; }

double Student::calcAverage() {
  double temp = 0.0;
  for (int i = 0; i < 5; i++) {
    temp += results[i];
  }
  averageMark = temp / 5.0;
  return temp / 5.0;
}

bool Student::pass() {
  for (int i = 0; i < 5; i++) {
    if (results[i] < 50) {
      break;
    }

    if ((results[i] >= 50) && i == 4) {
      return true;
    }
  }

  return false;
}

void Student::displayResults() {
  cout << studentName << endl;
  cout << studentNumber << endl;
  cout << diplomaName << endl;
  for (int i = 0; i < 5; i++) {
    cout << modules[i] << ": " << results[i] << endl;
  }

  cout << "AVERAGE MARK: " << averageMark << endl;
  if (pass()) {
    cout << "You have PASSED." << endl;
  } else {
    cout << "You have FAILED." << endl;
  }

  cout << endl;
}

// accessors
string Student::getStudentName() { return studentName; }

int Student::getID() { return ID; }

int Student::getStudentNumber() { return studentNumber; }

string Student::getDiplomaName() { return diplomaName; }

double Student::getAverageMark() { return averageMark; }

string Student::getModuleName(int index) { return modules[index]; }

// mutators
void Student::setStudentName(string name) { studentName = name; }

void Student::setID(int id) { ID = id; }

void Student::setStudentNumber(int num) { studentNumber = num; }

void Student::setDiplomaName(string dipName) {
  diplomaName = dipName;
  if (diplomaName == "Garden Design") {
    for (int i = 0; i < 5; i++) {
      modules[i] = "G" + to_string(i + 1);
    }
  } else if (diplomaName == "Gourmet Cooking") {
    for (int i = 0; i < 5; i++) {
      modules[i] = "C" + std::to_string(i + 1);
    }
  }
}

void Student::setAverageMark(double mark) { averageMark = mark; }

void Student::setExamResult(int r, int index) { results[index] = r; }

// overloaded operator
ostream &operator<<(ostream &outs, const Student &s) {
  outs << "Student name: " << s.studentName << endl;
  outs << "Student ID: " << s.ID << endl;
  outs << "Student number: " << s.studentNumber << endl;
  outs << "Diploma name: " << s.diplomaName << endl;
  outs << endl;
  for (int i = 0; i < 5; i++) {
    outs << s.modules[i] << ": " << s.results[i] << endl;
  }
  outs << "AVERAGE MARK: " << s.averageMark << endl << endl;
}