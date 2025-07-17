#include <iostream>
using namespace std;

int main() {
    
    int intArray[5]; 
    float floatArray[] = {1.1f, 2.2f, 3.3f}; 

    
    for (int i = 0; i < 5; i++) {
        intArray[i] = i + 1;
    }

    
    intArray[2] = 10;


    cout << "Integer array: ";
    for (int i = 0; i < 5; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;

 
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += intArray[i];
    }

    float average = sum / 5.0;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
