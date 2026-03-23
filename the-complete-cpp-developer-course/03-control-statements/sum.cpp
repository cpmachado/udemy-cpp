#include <iostream>

using namespace std;

int
main()  {
    int input;
    int sum = 0;


    cout << "Enter a non-negative integer(or negative to quit): ";
    cin >> input;
    cin.get();

    while (input >= 0) {
        sum += input;
        cout << "Enter a non-negative integer(or negative to quit): ";
        cin >> input;
        cin.get();
    }

    cout << "Total: " << sum << endl;


    return 0;
}
