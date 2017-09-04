#include "RepeatPrescription.h"
#include <iostream>
#include "Prescription.h"

using namespace std;

RepeatPrescription::RepeatPrescription() : Prescription() {
  numberOfRepeats = 0;
  lastDateIssued = 0;
}

RepeatPrescription::RepeatPrescription(string med, string pName, string fund,
                                       int num, double c, int repeats, int date)
    : Prescription(med, pName, fund, num, c) {
  numberOfRepeats = repeats;
  lastDateIssued = date;
}

void RepeatPrescription::issuePrescription(int d) {
  lastDateIssued = d;
  numberOfRepeats--;
  if (numberOfRepeats == 0) {
    cout << "This is the last issue of this prescription." << endl;
  }
}

void RepeatPrescription::DisplayInfo() {
  cout << "Medicine prescribed: " << getMedication() << endl;
  cout << "Patient: " << getPatientName() << endl;
  cout << "Medical aid fund: " << getMedAidFund() << endl;
  cout << "Medical aid number: " << getMedAidNum() << endl;
  cout << "Cost: R" << getMedCost() << endl;
  cout << "Number of repeats: " << numberOfRepeats << endl;
  cout << "Last date issued: " << lastDateIssued << endl;
}

int RepeatPrescription::getRepeats() { return numberOfRepeats; }

int RepeatPrescription::getDateIssued() { return lastDateIssued; }