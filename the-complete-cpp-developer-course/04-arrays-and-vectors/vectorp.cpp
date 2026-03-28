#include <iostream>
#include <string>
#include <vector>

using namespace std;

int
main(void) {
    vector<string> names;


    names.push_back("John");
    names.push_back("Bob");
    names.push_back("Sally");
    names.push_back("Shannon");
    names.push_back("Paul");

    names.insert(names.begin() + 2, "cpmachado");
    names.pop_back();

    for(const string& name: names) {
        cout << name << endl;
    }

    return 0;
}
