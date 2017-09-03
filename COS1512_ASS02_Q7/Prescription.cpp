#include "Prescription.h"
#include <iostream>
#include <string>
using namespace std;

//constructors
Prescription::Prescription()
{
    medication = "";
    patientName = "";
    medAidFund = "";
    medAidNum = 0;
    medCost = 0;
}

Prescription::Prescription(string med, string pName, string fund, int num, double c)
{
    medication = med;
    patientName = pName;
    medAidFund = fund;
    medAidNum = num;
    medCost = c;
}

//accessors
string Prescription::getMedication()
{
    return medication;
}

string Prescription::getPatientName()
{
    return patientName;
}

string Prescription::getMedAidFund()
{
    return medAidFund;
}

int Prescription::getMedAidNum()
{
    return medAidNum;
}

double Prescription::getMedCost()
{
    return medCost;
}

//required functions
void Prescription::Discount()
{
    if (medAidFund == "THEAID")
    {
        int d;
        cout << "Enter the discount percentage (eg. 15): ";
        cin >> d;
        medCost *= ((100 - d) / 100.0);
    }
    else
    {
        cout << "Discount only applicable to members of THEAID" << endl;
    }
}

void Prescription::DisplayInfo()
{
    cout << "Medicine prescribed: " << medication << endl;
    cout << "Patient: " << patientName << endl;
    cout << "Medical aid fund: " << medAidFund << endl;
    cout << "Medical aid number: " << medAidNum << endl;
    cout << "Cost: R" << medCost << endl;
}
