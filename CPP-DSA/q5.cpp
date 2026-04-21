#include <iostream>
using namespace std;

int main() {
    // initialising x and y as mentioned in the pseudocode
    double x = 0;
    double y = 20;

    // loop runs first then checks the condition at the bottom
    do {
        y = y - 4;       // subtract 4 from y
        x = x + (2.0 / y);  // add 2/y to x (using 2.0 to avoid integer division)

    } while (y >= 6);  // keeps going until y is less than 6

    cout << "x = " << x << endl;

    return 0;
}