#include <iostream>

using namespace std;

int
main(void) {
    int age;

    cout << "Welcome to the Pub" << endl;
    cout << "Please enter your age: ";
    cin >> age;

    if (age >= 21) {
        cout << "Would you like a beer?" << endl;
    } else if (age >= 16) {
        cout << "Would you like a Coke?" << endl;
        cout << "At least you can drive." << endl;
    } else {
        cout << "Would you like a Coke?" << endl;
    }

    cout << "Thank you, come again" << endl;
    return 0;
}
