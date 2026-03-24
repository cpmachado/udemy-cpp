#include <iostream>

using namespace std;

int
main(void) {
    char grade;

    cout << "Enter your grade: ";
    cin >> grade;

    switch (grade) {
    case 'A':
    case 'a':
        cout << "Great job!" << endl;
        break;
    case 'B':
    case 'b':
        cout << "Good job!" << endl;
        break;
    case 'C':
    case 'c':
        cout << "You can do better!" << endl;
        break;
    case 'D':
    case 'd':
        cout << "You're getting pretty close to failing!" << endl;
        break;
    case 'F':
    case 'f':
        cout << "You're failing the course!" << endl;
        break;
    default:
        cout << "You entered an invalid grade!" << endl;
    }


    return 0;
}
