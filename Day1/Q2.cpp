#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    double average;
    char grade;

    cout << "Enter marks for 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;

    if (average >= 90 && average <= 100) {
        grade = 'A';
    } else if (average >= 80 && average <= 89) {
        grade = 'B';
    } else if (average >= 70 && average <= 79) {
        grade = 'C';
    } else if (average >= 60 && average <= 69) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
