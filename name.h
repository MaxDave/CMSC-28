#include <iostream>
#include <string>

using namespace std;

class Name {
private:
    string fname;
    string lname;

public:
    //Default Constructor
    Name(){}

    // Constructor
    Name(string fname, string lname){
        this->fname = fname;
        this->lname = lname;
    }

    // Setters
    void setFirstName(string first) {
        fname = first;
    }

    void setLastName(string last) {
        lname = last;
    }

    // Getters
    string getFirstName() {
        return fname;
    }

    string getLastName() {
        return lname;
    }
};