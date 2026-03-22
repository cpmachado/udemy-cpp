#include <iostream>
#include <string>

using namespace std;


int
main(void) {
    string fullName;
    string location;
    int initialScore;

    cout << "Please enter your name: ";
    getline(cin, fullName);

    cout << "Please enter your location: ";
    getline(cin, location);

    cout << "Please enter your initial score: ";
    cin >> initialScore;
    cin.get();

    cout << "Hello, " << fullName << endl;
    cout << "We hear you are from " << location << endl;
    cout << "Your original score is " << initialScore << ", but with five points added,"
         << "your score is " << (initialScore + 5) << endl;

    return 0;
}
