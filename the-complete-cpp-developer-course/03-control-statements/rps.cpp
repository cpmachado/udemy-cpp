#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int
main(void) {
    char choice, ai;
    bool win;

    srand(time(nullptr));


    cout << "Insert a move(RPS): ";
    cin >> choice;

    choice = toupper(choice);

    if (choice != 'R' && choice != 'P' && choice != 'S') {
        cout << "invalid choice" << endl;
        return 1;
    }

    switch (rand() % 3) {
    case 0:
        ai = 'R';
        win = choice == 'P';
        break;
    case 1:
        ai = 'P';
        win = choice == 'S';
        break;
    case 2:
        ai = 'S';
        win = choice == 'R';
    }

    cout << "AI played '" << ai << "'" << endl;
    if (choice == ai) {
        cout << "It's a draw" << endl;
    } else if (win) {
        cout << "You win" << endl;
    } else {
        cout << "You lose" << endl;
    }


    return 0;
}
