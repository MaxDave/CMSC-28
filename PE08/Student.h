#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
public:
    string course;
    string department;
    string college;

    void setStudentNum(const string& studentNum);
    string getStudentNum() const;

private:
    string studentNum;
};

void Student::setStudentNum(const string& studentNum) {
    this->studentNum = studentNum;
}

string Student::getStudentNum() const {
    return studentNum;
}

#endif
