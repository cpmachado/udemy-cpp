#include <iostream>

using namespace std;

int
main() {
    int start, end;

    cout << boolalpha;

    cout << "Enter start year: ";
    cin >> start;

    cout << "Enter end year: ";
    cin >> end;

    for (int year = start; year <= end; year++) {
        cout << year << "," << (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) << endl;
    }

    return 0;
}
