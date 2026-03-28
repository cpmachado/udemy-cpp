#include <iostream>
#include <array>

using namespace std;

int
main(void) {
    array<int, 5> myIntArray{1,2};


    for (int a : myIntArray) {
        cout << a << endl;
    }

    cout << "Size of the array: " << myIntArray.size() << endl;

    return 0;
}
