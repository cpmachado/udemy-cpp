#include <cctype>
#include <iomanip>
#include <iostream>

using namespace std;

int
main(void) {
    char pkg;
    int devices;
    double totalcost;

    const int includeA = 1;
    const int includeB = 3;
    const int includeC = 5;

    const int baseA = 9;
    const int baseB = 14;
    const int baseC = 20;

    const int extraA = 6;
    const int extraB = 4;
    const int extraC = 2;

    cout << fixed << setprecision(2);

    cout << "Enter package: ";
    cin >> pkg;

    pkg = toupper(pkg);

    if  (pkg < 'A' || pkg > 'C') {
        cout << "invalid package" << endl;
        return 1;
    }

    cout  << "Enter number of devices: ";
    cin >> devices;

    if (devices < 0) {
        cout << "invalid number of devices" << endl;
        return 1;
    }

    int base;
    int included;
    int extra;



    switch (pkg) {
    case 'A':
        base = baseA;
        included = includeA;
        extra = extraA;
        break;
    case 'B':
        base = baseB;
        included = includeB;
        extra = extraB;
        break;
    case 'C':
        base = baseC;
        included = includeC;
        extra = extraC;
        break;
        break;
    }

    totalcost = base;

    if (devices > included) {
        totalcost += (devices - included) * extra;
    }

    cout << "Total cost is $" << totalcost << endl;


    return 0;
}
