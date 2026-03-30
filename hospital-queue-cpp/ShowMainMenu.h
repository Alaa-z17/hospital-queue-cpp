#pragma once
#include <iostream>
#include <string>
#include "Global.h"
#include "clsInputValidate.h"

class ShowMainMenu {
private:
    enum enMenuOptions { eAddPatient = 1, eServePatient = 2, eDisplayAll = 3, eExit = 4 };

    static void _AddPatient() {
        cout << "\n--- Add New Patient ---\n";

        cout << "Enter Patient Name: ";
        string name = clsInputValidate::ReadString();

        cout << "Enter Age: ";
        short age = clsInputValidate::ReadNumberBetween<short>(4,150,"Invalid age, please enter a number: ");

        cout << "Case Description: ";
        string caseDesc = clsInputValidate::ReadString();

        cout << "Arrival Time (e.g., 10:30 AM): ";
        string arrivalTime = clsInputValidate::ReadTime();

        bool isUrgent = clsInputValidate::Confirm("Is it an Urgent case? (y/n): ");

        _hospitalSystem.addPatient(clsPatient(name, age, caseDesc, arrivalTime, isUrgent));

        cout << "\n[System]: Patient added to queue successfully.\n";
    }

    static void _ServePatient() {
        _hospitalSystem.serveNextPatient();
    }

    static void _DisplayAll() {
        _hospitalSystem.displayAll();
    }

    static void PerformOption(enMenuOptions option) {
        switch (option) {
        case enMenuOptions::eAddPatient:
            _AddPatient();
            break;
        case enMenuOptions::eServePatient:
            _ServePatient();
            break;
        case enMenuOptions::eDisplayAll:
            _DisplayAll();
            break;
        case enMenuOptions::eExit:
            cout << "\nExiting Hospital System. Take care!\n";
            break;
        }
    }

public:
    static void Show() {
        short choice;
        do {
            system("cls");
            cout << "====================================\n";
            cout << "      HOSPITAL QUEUE SYSTEM        \n";
            cout << "====================================\n";
            cout << " [1] Add New Patient\n";
            cout << " [2] Serve Next Patient\n";
            cout << " [3] Display All Queues\n";
            cout << " [4] Exit\n";
            cout << "====================================\n";

            cout << "Choose an option [1-4]: ";
            choice = clsInputValidate::ReadNumberBetween<short>(1, 4);

            PerformOption((enMenuOptions)choice);

            if (choice != eExit) {
                cout << "\nPress Enter to return to menu...";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.get();
            }
        } while (choice != eExit);
    }
};