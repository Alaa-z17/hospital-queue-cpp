#pragma once
#include "clsQueue.h"
#include "clsPatient.h"

class clsHospitalSystem {
private:
    clsQueue<clsPatient> _regularQueue;
    clsQueue<clsPatient> _urgentQueue;

public:
    void addPatient(const clsPatient& patient) {
        if (patient.isUrgent())
            _urgentQueue.push(patient);
        else
            _regularQueue.push(patient);
    }

    void serveNextPatient() {
        if (!_urgentQueue.empty()) {
            cout << "\nServing Urgent Case: ";
            _urgentQueue.front().print();
            _urgentQueue.pop();
        }
        else if (!_regularQueue.empty()) {
            cout << "\nServing Regular Case: ";
            _regularQueue.front().print();
            _regularQueue.pop();
        }
        else {
            cout << "\nNo patients in the queue.\n";
        }
    }

    void displayAll() {
        cout << "\n--- Urgent Queue (" << _urgentQueue.size() << ") ---\n";
       
        cout << "--- Regular Queue (" << _regularQueue.size() << ") ---\n";
    }
};