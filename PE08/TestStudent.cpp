#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    Student student;

    cout << "This program will do do do, da da da..........................." << endl;
    cout << "Programmed by: " << endl << endl;

    string input;

    cout << "Student First Name: ";
    cin >> input;
    student.setFirstname(input);

    cout << "Student Last Name: ";
    cin >> input;
    student.setLastname(input);

    cout << "Student Gender: ";
    cin >> input;
    student.setGender(input);

    cout << "Student Number: ";
    cin >> input;
    student.setStudentNum(input);

    cout << "Course: ";
    cin.ignore();
    getline(cin, student.course);

    cout << "Department: ";
    getline(cin, student.department);

    cout << "College: ";
    getline(cin, student.college);

    cout << "\nHi, " << student.getFullName() << "! Welcome to UP Mindanao and congratulations! "
         << "We are pleased to inform you that you are admitted in the " << student.course 
         << " program under the Department of " << student.department 
         << ", College of " << student.college << ". Your Student number is " << student.getStudentNum() << "."
         << endl;

    return 0;
}
