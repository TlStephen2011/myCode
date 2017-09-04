#ifndef PRESCRIPTION_H
#define PRESCRIPTION_H

#include <iostream>
#include <string>
using namespace std;

class Prescription {
 public:
  // default constructor: sets all string vars to empty and
  // all nums to 0
  Prescription();
  // overloaded constructor: initializes all variables
  Prescription(string med, string pName, string fund, int num, double c);
  // accessors
  string getMedication();
  string getPatientName();
  string getMedAidFund();
  int getMedAidNum();
  double getMedCost();
  // calculates discount and updates medCost
  void Discount();
  void DisplayInfo();

 private:
  string medication;
  string patientName;
  string medAidFund;
  int medAidNum;
  double medCost;
};

#endif  // PRESCRIPTION_H