#include <iostream>

using namespace std;

int
main()  {
    int count = 0;

    while(count < 10) {
        cout << "Count: " << count << endl;
        count++;
    }

    int count2 = 100;

    do {
        cout << "Count2: " << count2 << endl;
        count2++;
    } while(count2 < 10);

    for(int i = 0; i < 10; i++) {
        cout << "i is " << i << endl;
    }

    int input;


    cout << "Enter a non-negative integer(or negative to quit): ";
    cin >> input;
    cin.get();

    while (input >= 0) {
        cout << "You entered: " << input << endl;
        cout << "Enter a non-negative integer(or negative to quit): ";
        cin >> input;
        cin.get();

    }


    return 0;
}
