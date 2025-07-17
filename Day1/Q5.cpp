#include <iostream>
using namespace std;

int main() {
    float temp, converted;
    char from, to;

    cout << "Enter temperature: ";
    cin >> temp;

    cout << "Convert from (C/F/K): ";
    cin >> from;

    cout << "Convert to (C/F/K): ";
    cin >> to;

    if (from == 'C' && to == 'F') {
        converted = (temp * 9/5) + 32;
    } else if (from == 'C' && to == 'K') {
        converted = temp + 273.15;
    } else if (from == 'F' && to == 'C') {
        converted = (temp - 32) * 5/9;
    } else if (from == 'F' && to == 'K') {
        converted = (temp - 32) * 5/9 + 273.15;
    } else if (from == 'K' && to == 'C') {
        converted = temp - 273.15;
    } else if (from == 'K' && to == 'F') {
        converted = (temp - 273.15) * 9/5 + 32;
    } else if (from == to) {
        converted = temp;
    } else {
        cout << "Invalid conversion!" << endl;
        return 1;
    }

    cout << "Converted temperature: " << converted << " " << to << endl;

    return 0;
}
