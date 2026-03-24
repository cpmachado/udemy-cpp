#include <iostream>
#include <cctype>

using namespace std;

int
main(void) {
    int age;
    char gender;

    cout << "Please enter your age: ";
    cin >> age;
    cin.get();

    if (age < 0) {
        cout << "Invalid age" << endl;
        return 1;
    }

    cout << "Please enter your gender: ";
    cin >> gender;
    cin.get();

    gender = tolower(gender);

    switch(gender) {
    case 'm':
    case 'f':
        break;
    default:
        cout << "Invalid gender" << endl;
        return 1;
    }


    if (gender == 'f' && age >= 60) {
        cout << "Eligible" << endl;
    } else {
        cout << "Not eligible" << endl;
    }
    return 0;
}
