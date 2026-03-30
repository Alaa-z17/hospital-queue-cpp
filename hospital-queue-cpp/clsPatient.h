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
    bool _isUrgent; // for emergency

public:
    clsPatient(string name, int age, string caseDescription, string arrivalTime, bool isUrgent = false) {
        _name = name;
        _age = age;
        _caseDescription = caseDescription;
        _arrivalTime = arrivalTime;
        _isUrgent = isUrgent;
    }

    // Getters
    string getName() const { return _name; }
    bool isUrgent() const { return _isUrgent; }

    void print() const {
        cout << (_isUrgent ? "[URGENT] " : "[Regular] ")
            << "Patient: " << _name << " | Case: " << _caseDescription << endl;
    }
};