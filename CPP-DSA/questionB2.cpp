#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    const double PI = 3.14159265358979;

    cout << "Enter the radius: ";
    cin >> radius;

    // using pow() to calculate r^3
    double rCubed = pow(radius, 3);

    // using 4.0/3.0 here so it doesn't do integer division and cut off the decimals
    double volume = (4.0 / 3.0) * PI * rCubed;

    cout << "Volume of sphere = " << volume << endl;

    return 0;
}
