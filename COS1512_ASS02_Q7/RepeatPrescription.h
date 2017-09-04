#ifndef REPEATPRESCRIPTION_H
#define REPEATPRESCRIPTION_H

#include <iostream>
#include "Prescription.h"

using namespace std;

class RepeatPrescription : public Prescription {
 public:
  // default constructor
  RepeatPrescription();
  // overloaded constructor
  RepeatPrescription(string med, string pName, string fund, int num, double c,
                     int repeats, int date);

  // updates prescription
  void issuePrescription(int d);
  // overides DisplayInfo
  void DisplayInfo();
  // accessors
  int getRepeats();
  int getDateIssued();

 private:
  int numberOfRepeats;
  int lastDateIssued;
};

#endif  // REPEATPRESCRIPTION_H