
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Even or Odd
    if (num % 2 == 0)
        cout << "Even number" << endl;
    else
        cout << "Odd number" << endl;

    // Positive, Negative or Zero
    if (num > 0)
        cout << "Positive number" << endl;
    else if (num < 0)
        cout << "Negative number" << endl;
    else
        cout << "Zero" << endl;

    // Digit Count
    int absNum = num < 0 ? -num : num;
    if (absNum < 10)
        cout << "Single digit number" << endl;
    else if (absNum < 100)
        cout << "Double digit number" << endl;
    else
        cout << "More than two digits" << endl;

    return 0;
}
