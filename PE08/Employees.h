#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include "Person.h"

class Employees : public Person {
public:
    string position;
    string officeUnit;
    double salary;

    void setEmpNum(const string& empNum);
    string getEmpNum() const;

private:
    string empNum;
};

void Employees::setEmpNum(const string& empNum) {
    this->empNum = empNum;
}

string Employees::getEmpNum() const {
    return empNum;
}

#endif
