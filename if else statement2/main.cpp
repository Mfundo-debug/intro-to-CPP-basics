#include <iostream>

using namespace std;
//Program to check whether an integer is positive or negative
// 0 is considered as a positive
int main()
{   int number;
    cout << "Enter an integer: " << endl;
    cin>> number;
    if (number >= 0) {
        cout << "You entered a positive integer: " << number << endl;
    }
    else {
        cout << "You entered a negative integer: " << number << endl;
    }
    cout << "This line is always printed.";
    return 0;
}
