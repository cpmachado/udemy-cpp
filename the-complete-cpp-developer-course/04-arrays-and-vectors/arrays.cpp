#include <iostream>

using namespace std;

int
main(void) {
    const int ARRAY_SIZE = 5;
    int myArray[ARRAY_SIZE];

    myArray[0] = 15;
    myArray[1] = 20;
    myArray[2] = 25;
    myArray[3] = 30;
    myArray[4] = 35;

    for(int i = 0; i < ARRAY_SIZE; i++) {
        cout << myArray[i] << endl;
    }


    return 0;
}
