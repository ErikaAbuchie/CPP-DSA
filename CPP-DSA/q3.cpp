#include <iostream>
using namespace std;

// function to calculate area
double calcArea(double side) {
    return side * side;  // area formula
}

// function to calculate perimeter
double calcPerimeter(double side) {
    return 4 * side;  // perimeter formula
}

int main() {
    double side;

    cout << "Enter the side length of the square: ";
    cin >> side;

    // calling both functions and storing the results
    double area = calcArea(side);
    double perimeter = calcPerimeter(side);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}