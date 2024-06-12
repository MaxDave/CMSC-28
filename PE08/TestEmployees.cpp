#include <iostream>
#include "Employees.h"

using namespace std;

int main() {
    Employees employee;

    cout << "This program will manage employee information." << endl;
    cout << "Programmed by: " << endl << endl;

    string input;
    double salaryInput;

    cout << "Employee First Name: ";
    cin >> input;
    employee.setFirstname(input);

    cout << "Employee Last Name: ";
    cin >> input;
    employee.setLastname(input);

    cout << "Employee Gender: ";
    cin >> input;
    employee.setGender(input);

    cout << "Employee Number: ";
    cin >> input;
    employee.setEmpNum(input);

    cout << "Position: ";
    cin.ignore();
    getline(cin, employee.position);

    cout << "Office/Unit: ";
    getline(cin, employee.officeUnit);

    cout << "Salary: ";
    cin >> salaryInput;
    employee.salary = salaryInput;

    cout << "\nHello, " << employee.getFullName() << "! Your Employee number is " << employee.getEmpNum() 
         << ". You are currently holding the position of " << employee.position 
         << " in the " << employee.officeUnit << ". Your salary is " << employee.salary << "." << endl;

    return 0;
    
}
