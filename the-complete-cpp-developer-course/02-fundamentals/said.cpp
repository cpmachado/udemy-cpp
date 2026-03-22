#include <iostream>
#include <string>

using namespace std;


int
main(void) {
    string fullName;
    string alias;
    int age;
    int level;
    string favouriteGadget;

    cout << "Please enter your name: ";
    getline(cin, fullName);

    cout << "Please enter your alias: ";
    getline(cin, alias);

    cout << "Please enter your age: ";
    cin >> age;
    cin.get();

    cout << "Please enter your level(1-10): ";
    cin >> level;
    cin.get();

    cout << "Please enter your favourite gadget: ";
    getline(cin, favouriteGadget);

    cout << "===========================" << endl;
    cout << "  S.E.C.R.E.T. A.G.E.N.T." << endl;
    cout << "===========================" << endl;
    cout << "Agent name      : " << fullName << endl;
    cout << "Alias           : " << alias << endl;
    cout << "Age             : " << age << endl;
    cout << "Level           : " << level << endl;
    cout << "Preferred Gadget: " << level << endl;
    cout << "===========================" << endl;
    cout << "Mission Status: CLASSIFIED" << endl;

    return 0;
}
