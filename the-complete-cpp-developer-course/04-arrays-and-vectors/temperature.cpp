#include <array>
#include <iomanip>
#include <iostream>

using namespace std;

int
main(void) {

    array<double, 7> fahr ;

    cout << fixed << setprecision(2);

    for (int i = 0; i< 7; i++) {
        cout << "Enter a fahrenheit value: ";
        cin >> fahr[i];
    }

    for (int i = 0; i< 7; i++) {
        cout << (i+1) << "- F:" << fahr[i] << ", C: " << ((fahr[i] - 32) *5.0 / 9.0) << endl;
    }

    return 0;
}
