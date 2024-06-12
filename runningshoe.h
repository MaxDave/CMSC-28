#ifndef RUNNINGSHOE_H
#define RUNNINGSHOE_H

#include <string>
#include <iostream>

class runningshoe {
public:
    std::string brand;
    std::string color;
    double size;

    // Constructor declaration
    runningshoe(std::string brand, double size, std::string color) {
    // Initialize member variables
    this->brand = brand;
    this->size = size;
    this->color = color;
    }

    // Member function to display shoe details
    void display() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Size: " << size << std::endl;
        std::cout << "Color: " << color << std::endl;
    }
};

#endif 
