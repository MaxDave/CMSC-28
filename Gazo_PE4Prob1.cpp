#include <iostream>
using namespace std;

//Function that prints the name of the programmer, date done, subject number, and program description
void description(){
    cout<<"Program by: Maxwell Dave Gazo\n";
    cout<<"Date finished: April 28, 2024\n";
    cout<<"CMSC 28\n";
    cout<<"\nThis program will ask the user to input three numbers. \nThen, it will compare these numbers to find the highest and lowest values. \nOnce it identifies the highest and lowest values, it will calculate the difference between them.\n";
}

//Function that accepts the inputs from the user
// used "&" to access the memory of the first, second, and third variable that was declared globally 
void input(int &first, int &second, int &third){
    cout<<"\nInput first number: ";
    cin>>first;
    cout<<"Input second number: ";
    cin>>second;
    cout<<"Input third number: ";
    cin>>third;
    cout<<"\n";
}

// Functipn that basically do the comparing and solve for the difference between the highest and lowest values 
void compare(int x, int y, int z){
    // Declare high and low variables
    int high, low;
    // Sets the first input as the highest
    high = x;
    // compares the remaining values to the assumed highest value
    if (y > high)
        high = y;
    if (z > high)
        high = z;
    // Sets the first input as the highest 
    low = x;
    // compares the remaining values to the assumed lowest value
    if (y < low)
        low = y;
    if (z < low)
        low = z;
    // prints the output of the comparison
    cout << "The highest value is: " << high << endl;
    cout << "The lowest value is: " << low << endl;
    // prints the difference between both numbers
    cout << "The difference between the highest and lowest values is: " << high - low << endl;
}
    // main function
int main(){
    description();
    int first, second, third; // Declare variables 
    input(first, second, third); // Call input function to get user input
    compare(first, second, third); // Call compare function with user input
    return 0;
}
