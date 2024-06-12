#include <iostream>
#include "person.h"
#include "name.h"

using namespace std;

int main() {
    int a;
    char g;
    string first, last, border(50, '=');

    cout << "Creating the 1st Person object (p) using the 1st Constructor" << endl;
    Person p;
    Name person;
    
    cout << "\nInput age: ";
    cin >> a;
    p.setage(a);

    cout << "Input gender: ";
    cin >> g;
    p.setgender(g);

    std::cout << "Input First Name: ";
    std::cin >> first;

    std::cout << "Input Last Name: ";
    std::cin >> last;

    std::cout << border << std::endl << "Age = " << p.getage() << std::endl;
    std::cout << "Gender = " << p.getgender() << std::endl;
    std::cout << "First Name = " << first << std::endl;
    std::cout << "Last Name = " << last << std::endl;
    p.generation(a);
    std::cout << border << std::endl;


    return 0;
}
