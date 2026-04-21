#include <iostream>
using namespace std;

// this function takes in a character and checks if its upper or lower case
void checkCase(char ch) {
    if (isupper(ch)) {
        cout << ch << " is uppercase" << endl;
    } else if (islower(ch)) {
        cout << ch << " is lowercase" << endl;
    } else {
        // this is just in case user enters something that is not a letter
        cout << ch << " is not a letter" << endl;
    }
}

int main() {
    char userChar;

    cout << "Enter a character: ";
    cin >> userChar;

    // passing the character into the function
    checkCase(userChar);

    return 0;
}