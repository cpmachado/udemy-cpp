#include <iostream>
#include <string>
#include <vector>

using namespace std;

int
main(void) {
    vector<int> vec;
    vector<string> svec(3);

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    cout << "vec size: " << vec.size() << endl;

    svec[0] = "John";
    svec[1] = "Bob";
    svec[2] = "Sally";

    svec.push_back("Shannon");

    for(int val: vec) {
        cout << val << endl;
    }

    cout << endl;

    for(string name: svec) {
        cout << name << endl;
    }

    cout << endl;

    cout << "front: " << svec.front() << endl;
    cout << "back: " << svec.back() << endl;


    svec.pop_back();
    svec.insert(svec.begin(), "Don");

    cout << "\nAfter modification" << endl;

    cout << "front: " << svec.front() << endl;
    cout << "back: " << svec.back() << endl;

    return 0;
}
