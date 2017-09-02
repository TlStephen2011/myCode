#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{

  public:
    //initialises all string variables to empty strings and
    //all other variable types to 0
    Student();
    //outputs Bye!
    ~Student();
    //returns the average of 5 results stored in results[5]
    double calcAverage();
    //returns true if every value in results is >=50
    bool pass();
    //displays a students name, student#, diploma name, results for each module
    //and pass or fail
    void displayResults();
    //accessors
    string getStudentName();
    int getID();
    int getStudentNumber();
    string getDiplomaName();
    double getAverageMark();
    //gets the module name at [index]
    string getModuleName(int index);
    //mutators
    void setStudentName(string name);
    void setID(int id);
    void setStudentNumber(int num);
    void setDiplomaName(string dipName);
    void setAverageMark(double mark);
    //sets results[index] equal to r
    void setExamResult(int r, int index);
    //overloaded insertion operator to output all details of a student
    friend ostream &operator<<(ostream &outs, const Student &s);

  private:
    string studentName;
    int ID;
    int studentNumber;
    string diplomaName;
    double averageMark;
    string modules[5];
    int results[5];
};

#endif //STUDENT_H