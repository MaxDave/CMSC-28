#include <iostream>
#include <string>

using namespace std;

class Person{
    private:
    string fname;
    string lname;
    string gender;

    public:
    Person(){}

    Person(string fname, string lname, string gender){
        this->fname = fname;
        this->lname = lname;
        this->gender = gender;
    }


    string getGender(){
        return gender;
    }

    string getFullName() const {
    return fname + " " + lname;
  }

    void setFirstname(string first){
        fname = first;
    }

    void setLastname(string last){
        lname = last;
    }

    void setGender(string gend){
        gender = gend;
    }

};
