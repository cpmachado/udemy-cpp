#include <iostream>

using namespace std;


//
// Function Declarations(aka Prototypes)
//
void printSomething();
void printName();


//
// Function Definitions/implementations
//
int
main(void) {
    printSomething();
    printName();
    return 0;
}

void
printSomething() {
    cout << "Hej!" << endl;
}

void
printName() {
    cout << "cpmachado!" << endl;
}
