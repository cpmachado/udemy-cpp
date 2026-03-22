#include <iostream>

using namespace std;

int
main(void) {
    bool isRaining = false;
    bool isWarm = true;

    cout << boolalpha;

    cout << "isRaining && isWarm = " << (isRaining && isWarm) << endl;
    cout << "isRaining || isWarm = " << (isRaining || isWarm) << endl;
    cout << "!isRaining          = " << (!isRaining) << endl;

    return 0;
}
