#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string fname;
    string lname;
    string gender;

public:
    string emailAdd;
    string cpNumber;

    Person() {}

    Person(string fname, string lname, string gender) {
        this->fname = fname;
        this->lname = lname;
        this->gender = gender;
    }

    string getGender() const {
        return gender;
    }

    string getFullName() const {
        return fname + " " + lname;
    }

    void setFirstname(const string& first) {
        fname = first;
    }

    void setLastname(const string& last) {
        lname = last;
    }

    void setGender(const string& gend) {
        gender = gend;
    }

    void setEmailAdd(const string& email) {
        emailAdd = email;
    }

    void setCpNumber(const string& cpNum) {
        cpNumber = cpNum;
    }

    string getEmailAdd() const {
        return emailAdd;
    }

    string getCpNumber() const {
        return cpNumber;
    }
};

#endif
