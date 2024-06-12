#include <iostream>
#include <string>
using namespace std;

// Function to display program information
void description() {
    cout << "Program by: Maxwell Dave Gazo\n";
    cout << "Date finished: April 28, 2024\n";
    cout << "CMSC 28\n";
    cout << "\nThis program will convert the integer (base 10) to its binary form (base 2)\n";
}

// Function to take input from the user
void input(int& number) {
    cout << "Input integer: ";
    cin >> number;
}

// Function to convert an integer to its binary representation
string converttobinary(int num) {
    string bin; // String to store binary representation
    while (num > 0) {
        bin = to_string(num % 2) + bin; // Get the remainder (binary digit) and prepend it to the binary string
        num /= 2; // Divide the number by 2 to continue converting
    }
    return bin; // Return the binary string
}

int main() {
    int number; // Variable to store the input integer
    description(); // Display program information
    input(number); // Get input from the user
    string bin = converttobinary(number); // Convert the input integer to its binary representation
    cout << "Binary equivalent: " << bin << endl; // Output the binary equivalent
    return 0; // Return 0 to indicate successful execution
}
