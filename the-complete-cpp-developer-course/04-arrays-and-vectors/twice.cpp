#include <array>
#include <iostream>


using namespace std;


int
main(void) {

    array<int, 10> v;

    for (int i = 0; i < v.size(); i++) {
        v[i] = 2 *i;
    }

    for (int x: v) {
        cout << x << endl;
    }

    return 0;
}
