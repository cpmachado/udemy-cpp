#include <iostream>

using namespace std;

int
main(void) {
    int a = 15;
    int b = 20;

    cout << boolalpha;

    cout << "(a,b)  = (" << a << "," << b << ")" << endl;
    cout << "a < b  = " << (a < b) << endl;
    cout << "a <= b = " << (a <= b) << endl;
    cout << "a > b  = " << (a > b) << endl;
    cout << "a >= b = " << (a >= b) << endl;
    cout << "a == b = " << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl;

    return 0;
}
