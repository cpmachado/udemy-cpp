#include <iostream>

using namespace std;


int
main(void) {
    const int ARRAY_SIZE = 10;
    int v[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        v[i] = 2*i + 1;
    }

    for (auto i: v) {
        cout << i << endl;
    }

    return 0;
}
