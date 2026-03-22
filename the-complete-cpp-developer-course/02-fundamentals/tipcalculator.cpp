#include <iomanip>
#include <iostream>

using namespace std;


int
main(void) {
    double billAmount;
    double tipPercentage;
    double tipAmount;
    double totalAmount;

    cout << fixed << setprecision(2);

    cout << "Enter the total bill amount: ";
    cin >> billAmount;
    cin.get();

    cout << "Enter the tip percentage you would like to leave: ";
    cin >> tipPercentage;
    cin.get();

    tipAmount = billAmount * (tipPercentage / 100.0);
    totalAmount = billAmount + tipAmount;

    cout << "Tip: $" << tipAmount << endl;
    cout << "Total(with tip): $" << totalAmount << endl;

    return 0;
}
