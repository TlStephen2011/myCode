#include "Student.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    Student students[3];

    students[0].setStudentName("John Martin");
    students[1].setStudentName("Busi Molefe");
    students[2].setStudentName("Sean Naidoo");

    students[0].setID(78120189);
    students[1].setID(81011201);
    students[2].setID(69812018);

    students[0].setStudentNumber(12345);
    students[1].setStudentNumber(23456);
    students[2].setStudentNumber(34567);

    students[0].setDiplomaName("Garden Design");
    students[1].setDiplomaName("Gourmet Cooking");
    students[2].setDiplomaName("Garden Design");

    for (int i = 0; i < 3; i++)
    {
        cout << students[i].getStudentName() << endl;
        cout << students[i].getID() << endl;
        cout << students[i].getStudentNumber() << endl;
        cout << students[i].getDiplomaName() << endl;
        cout << "Enter the results for each course as prompted below: " << endl;
        for (int j = 0; j < 5; j++)
        {
            int mark;
            cout << students[i].getModuleName(j) << ": ";
            cin >> mark;
            students[i].setExamResult(mark, j);
        }
        cout << endl;
    }

    students[0].calcAverage();
    students[1].calcAverage();
    students[2].calcAverage();

    ofstream fout;
    fout.open("RegisteredStudentsResults.txt");
    if (fout.fail())
    {
        cout << "Failed to open output file." << endl;
        exit(1);
    }
    fout << students[0] << students[1] << students[2];
    fout.close();

    students[0].displayResults();
    students[1].displayResults();
    students[2].displayResults();

    return 0;
}