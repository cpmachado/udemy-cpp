#include <iostream>

using namespace std;

int
main() {
    // copy initialization - int myInt = 15;
    // direct initialization  - int myInt(15);
    int myInt{15};
    double myDouble{3.14159};

    cout << "myInt    = " << myInt << endl;
    cout << "myDouble = " << myDouble << endl;
    return 0;
}
