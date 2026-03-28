#include <iostream>

using namespace std;

void passByVal(int n);
void passByRef(int& n);


int
main(void) {
    int n = 20;

    cout << "Before passByVal: " << n << endl;
    passByVal(n);
    cout << "After passByVal: " << n << endl;

    cout << "Before passByRef: " << n << endl;
    passByRef(n);
    cout << "After passByRef: " << n << endl;
    return 0;
}

void
passByVal(int n) {
    n = 100;
    cout << "Inside passByVal: " << n << endl;
}

void
passByRef(int& n) {
    n = 100;
    cout << "Inside passByRef: " << n << endl;
}
