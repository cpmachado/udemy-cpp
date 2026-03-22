#include <iostream>
#include <string>

using namespace std;

int
main(void) {
    const string MY_NAME = "cpmachado";

    // MY_NAME = "asdf"; -- doesn't compile

    cout << "MY_NAME = " << MY_NAME << endl;
    return 0;
}
