#include <iostream>
using namespace std;

int main() {

    int a = 10;

    int b(20);

    int c{30};

    
    int d{}; 
    cout << "Copy initialized: a = " << a << endl;
    cout << "Direct initialized: b = " << b << endl;
    cout << "Uniform initialized: c = " << c << endl;
    cout << "Default initialized: d = " << d << endl;

    return 0;
}
