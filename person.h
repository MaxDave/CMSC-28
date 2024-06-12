#include <iostream>
using namespace std;

class Person {
private:
    int age;
    char gender;

public:
    Person() {}
    Person(int newage) {
        age = newage;
        gender = 'M';
    }
    Person(int newage, char c) {
        age = newage;
        gender = c;
    }

    void setage(int newage) {
        if (newage >= 0) {
            age = newage;
        } else {
            cout << "invalid age!!!" << endl;
        }
    }

    int getage() {
        return age;
    }

    void setgender(char c) {
        if ((c == 'M') || (c == 'F')) {
            gender = c;
        } else {
            cout << "invalid gender!!!" << endl;
        }
    }

    char getgender() {
        return gender;
    }

   void generation(int age){
        int birthyear = 2024 - age;
        if (birthyear >= 2011){
            cout << "You belong to Generation Alpha!" << endl;
        }
        else if(birthyear >= 1997){
            cout << "You are a Gen Z!" << endl;
        } else if(birthyear >= 1981){
            cout << "You are a Millenial!" << endl;
        } else if(birthyear >= 1965){
            cout << "You are a Gen X!" << endl;
        } else if(birthyear >= 1946){
            cout << "You are a Boomer!" << endl;
        } else if (birthyear >= 1928){
            cout << "You belong to the Silent Generation!" << endl;
        }
        else{
            cout << "You belong to the Greatest Generation!" << endl;
        }
    }
};
