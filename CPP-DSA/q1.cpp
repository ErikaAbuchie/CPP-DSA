#include <iostream>
using namespace std;

int main() {
    int days;

    // ask user to enter number of days
    cout << "Enter number of days: ";
    cin >> days;

    // converting days to seconds
    // 1 day = 24hrs, 1hr = 60mins, 1min = 60secs so multiply all together
    long long seconds = (long long)days * 24 * 60 * 60;

    cout << days << " day(s) = " << seconds << " seconds" << endl;

    return 0;
}
