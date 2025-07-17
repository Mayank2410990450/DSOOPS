#include <iostream>
using namespace std;

int x = 10; 

int main() {
    cout << "Global x = " << x << endl;

    int x = 20; 
    cout << "Function scope x = " << x << endl;

    {
        int x = 30; 
        cout << "Block scope x = " << x << endl;
    }

    cout << "Back to function scope x = " << x << endl;

    return 0;
}
