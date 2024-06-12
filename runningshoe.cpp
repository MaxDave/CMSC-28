#include <iostream>
#include <string>

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

int main() {
    // Creat an object and initialize it
    runningshoe shoe("Nike", 44, "Purple");

    // Display shoe features
    shoe.display();

    return 0;
}
