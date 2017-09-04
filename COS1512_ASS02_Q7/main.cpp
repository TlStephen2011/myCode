#include <iostream>
#include <string>
#include "Prescription.h"
#include "RepeatPrescription.h"
using namespace std;

int main() {
  // Testing class Prescription
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
  cout << endl;

  // Testing derived class RepeatPrescription
  RepeatPrescription firstRepeat("Myprodol", "Annie Apfelbaum", "MYAID", 43215,
                                 89.59, 1, 20170620);

  cout << firstRepeat.getMedication() << endl;
  cout << firstRepeat.getPatientName() << endl;
  cout << firstRepeat.getMedAidFund() << endl;
  cout << firstRepeat.getMedAidNum() << endl;
  cout << firstRepeat.getMedCost() << endl;
  cout << firstRepeat.getRepeats() << endl;
  cout << firstRepeat.getDateIssued() << endl;
  cout << endl;

  firstRepeat.issuePrescription(20170720);
  cout << endl;
  firstRepeat.DisplayInfo();

  return 0;
}