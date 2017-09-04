#include <iostream>
#include <string>
#include "Prescription.h"
using namespace std;

int main() {
  Prescription firstScript("Panado", "John Apfelbaum", "THEAID", 12345, 39.59);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << firstScript.getMedication() << endl;
  cout << firstScript.getPatientName() << endl;
  cout << firstScript.getMedAidFund() << endl;
  cout << firstScript.getMedAidNum() << endl;
  cout << firstScript.getMedCost() << endl;
  cout << endl;

  firstScript.Discount();
  cout << endl;
  firstScript.DisplayInfo();

  return 0;
}