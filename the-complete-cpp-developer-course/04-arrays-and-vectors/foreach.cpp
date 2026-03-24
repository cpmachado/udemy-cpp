#include <iostream>
#include <string>

using namespace std;

int
main(void) {
    string names[4] = {"Bob", "Sally", "John", "Ed"};

    for(auto name: names) {
        cout << name << endl;
    }

    return 0;
}
