#include <iostream>

using namespace std;

int
main(void) {
    int myNums[2][3] = {
        {1, 2, 3},
        {14, 5, 6},
    };


    for(int row = 1; row >= 0; row--) {
        for(int col = 2; col >= 0; col--) {
            cout << myNums[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}
