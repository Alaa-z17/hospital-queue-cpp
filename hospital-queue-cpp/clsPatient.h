#pragma once
#include <iostream>
#include <string>

using namespace std;

class clsPatient {
private:
    string _name;
    int _age;
    string _caseDescription;
    string _arrivalTime;

public:
    clsPatient(string name, int age, string caseDescription, string arrivalTime) {
        _name = name;
        _age = age;
        _caseDescription = caseDescription;
        _arrivalTime = arrivalTime;
    }

    // Getters
    string getName() const { return _name; }
    int getAge() const { return _age; }
    string getCaseDescription() const { return _caseDescription; }
    string getArrivalTime() const { return _arrivalTime; }

    // دالة لعرض بيانات المريض بشكل منظم
    void print() const {
        cout << "Patient: " << _name << " | Age: " << _age
            << " | Case: " << _caseDescription
            << " | Arrived at: " << _arrivalTime << endl;
    }
};