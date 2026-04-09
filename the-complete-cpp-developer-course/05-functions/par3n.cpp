#include <iostream>

using namespace std;


void threeTimesN(int input, int& output);

int
main(void) {
    int n = 1, n3;

    threeTimesN(n, n3);
    cout << "n: " << n << ", 3n: " << n3 << endl;

    return 0;
}

void
threeTimesN(int input, int& output) {
    output = 3 *input;
}
