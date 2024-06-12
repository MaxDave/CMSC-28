#include <iostream>
#include <cmath>
using namespace std;

int high(int array2[10]);
void dataentry(int array[10]);
int low(int array2[10]);
float avg(int array2[10]);
float SD(int array2[10]);
float Variance(int array2[10], float mean);
void printResults(int array[10]);

int main() {
    int array[10];
    cout << "Programming Exercise 05" << endl;
    cout << "Submitted by: Maxwell Dave Gazo" << endl;

    cout << "This program will ask the user to input various numbers (positive or negative but not zero) and perform basic statistics on these numbers."<<endl;
    cout << "\n";
    dataentry(array);
    printResults(array);
    return 0;
}

void dataentry(int array[10]) {
    for (int i = 0; i < 10; i++) {
        cout << "Input an integer: ";
        cin >> array[i];
        if (array[i] == 0) break;
    }
}

int high(int array2[10]) {
    int highest = array2[0];
    for (int i = 0; i < 10; i++) {
        if (array2[i] == 0) break;
        if (array2[i] > highest) highest = array2[i];
    }
    
    return highest;
}

int low(int array2[10]) {
    int lowest = array2[0];
    for (int i = 0; i < 10; i++) {
        if (array2[i] == 0) break;
        if (array2[i] < lowest) lowest = array2[i];
    }
    return lowest;
}

float avg(int array2[10]) {
    float sum = 0;
    int size = 0;
    for (int i = 0; i < 10; i++) {
        if (array2[i] == 0) break;
        size++;
        sum += array2[i];
    }
    float average = sum / size;
    return average;
}

float SD(int array2[10]) {
    float mean = avg(array2);
    float sumOfSquares = 0;
    int size = 0;
    for (int i = 0; i < 10; i++) {
        if (array2[i] == 0) break;
        size++;
        sumOfSquares += pow(array2[i] - mean, 2);
    }
    float variance = sumOfSquares / size;
    float standardDeviation = sqrt(variance);
    return standardDeviation;
}

float Variance(int array2[10], float mean) {
    float sumOfSquares = 0;
    int size = 0;
    for (int i = 0; i < 10; i++) {
        if (array2[i] == 0) break;
        size++;
        sumOfSquares += pow(array2[i] - mean, 2);
    }
    float variance = sumOfSquares / size;
    return variance;
}

void printResults(int array[10]) {

    float average = avg(array);
    float standardDeviation = SD(array);
    float variance = Variance(array, average);
    int lowest = low(array);
    int highest = high(array);

    cout << "Largest: " << highest << endl; 
    cout << "Smallest: " << lowest << endl; 
    cout << "Average: " << average << endl;
    cout << "Standard Deviation: " << standardDeviation << endl;
    cout << "Variance: " << variance << endl;
}
