#include <iostream>

using namespace std;


//
// Function Declarations(aka Prototypes)
//
void printHello();
void printNumber(int a);
int giveMe10();
int addThese(int a, int b);
int square(int x);


//
// Function Definitions/implementations
//
int
main(void) {
    int a = 120, b = 580;

    printHello();
    printNumber(giveMe10());
    printNumber(addThese(a, b));
    printNumber(square(a));

    return 0;
}

void
printHello() {
    cout << "Hej!" << endl;
}

void
printNumber(int a) {
    cout << a << endl;
}

int
giveMe10() {
    return 10;
}

int
addThese(int a, int b) {
    return a + b;
}

int
square(int x) {
    return x * x;
}
