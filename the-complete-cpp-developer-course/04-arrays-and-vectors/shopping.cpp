#include <iostream>
#include <vector>
#include <string>

using namespace std;


int
main() {
    vector<string> cart;
    string e = "";

    while (e != "done") {
        cout << "Enter an item: ";
        getline(cin, e);

        if (e != "" && e != "done") {
            cart.push_back(e);
        }
    }


    cout << "Your cart contains: " << endl;
    for(string item: cart) {
        cout << "- " << item << endl;
    }

    return 0;
}
