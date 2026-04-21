#include <iostream>
using namespace std;

int main() {
    int values[5];  // array to hold the 5 values
    double sum = 0;

    cout << "Enter 5 values:" << endl;

    // loop to get input from user 5 times and store in array
    for (int i = 0; i < 5; i++) {
        cout << "Value " << (i + 1) << ": ";
        cin >> values[i];
        sum += values[i];  // adding each value to sum as we go
    }

    // calculate average
    double average = sum / 5;

    cout << "Average = " << average << endl;

    return 0;
}