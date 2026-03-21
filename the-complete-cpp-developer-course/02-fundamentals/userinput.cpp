#include <iostream>
#include <string>

using namespace std;


int
main(void) {
    int age;
	string fullName;

    cout << "Please enter your age: ";
    cin >> age;
	cin.get();

    cout << "You are " << age << " years old." << endl;

    cout << "Please enter your name: ";
	getline(cin, fullName);

	cout << "Hello " << fullName << "!" << endl;

    return 0;
}
