#pragma once
#include <iostream>
#include <string>
#include <limits>
#include <regex>

using namespace std;

class clsInputValidate {
public:
    template <typename T>
    static T ReadNumber(string ErrorMessage = "Invalid Number, enter again: ") {
        T Number;
        while (!(cin >> Number)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << ErrorMessage;
        }
        return Number;
    }

    template <typename T>
    static T ReadNumberBetween(T From, T To, string ErrorMessage = "Number is not within range, enter again: ") {
        T Number = ReadNumber<T>();

        while (Number < From || Number > To) {
            cout << ErrorMessage;
            Number = ReadNumber<T>();
        }
        return Number;
    }
    static string ReadString() {
        string S = "";
        getline(cin >> ws, S);
        return S;
    }
    static bool Confirm(string Message = "Are you sure? (y/n): ") {
        char Choice;
        cout << Message;
        while (!(cin >> Choice) || (tolower(Choice) != 'y' && tolower(Choice) != 'n')) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter 'y' or 'n': ";
        }
        return tolower(Choice) == 'y';
    }
    static string ReadTime(string ErrorMessage = "Invalid Time Format! Please use (HH:MM AM/PM): ") {
        string Time;
        const regex timePattern("^(0[1-9]|1[0-2]):([0-5][0-9]) (AM|PM|am|pm)$");

        while (true) {
            getline(cin >> ws, Time);
            if (regex_match(Time, timePattern)) {
                return Time;
            }
            cout << ErrorMessage;
        }
    }
};