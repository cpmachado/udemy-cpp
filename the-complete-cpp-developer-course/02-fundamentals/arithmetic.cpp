#include <iostream>

using namespace std;

int
main() {
    int a = 10;
    int b = 3;

    int addition = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    cout << "(a, b) = (" << a << "," << b << ")" << endl;
    cout << "a + b  = " << addition << endl;
    cout << "a - b  = " << difference << endl;
    cout << "a * b  = " << product << endl;
    cout << "a / b  = " << quotient << endl;
    cout << "a \% b  = " << remainder << endl;

    int x = 10;

    cout << "x = " << x << endl;
    x++;
    cout << "x = " << x << endl;
    x--;
    cout << "x = " << x << endl;

    return 0;
}
