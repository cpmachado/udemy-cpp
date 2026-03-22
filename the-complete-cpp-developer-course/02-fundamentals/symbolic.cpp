#include <iostream>

using namespace std;

int
main(void) {
    const double MY_PI = 3.13159;

    // MY_PI = 3.15; doesn't compile

    cout << "MY_PI = " << MY_PI << endl;
    return 0;
}
