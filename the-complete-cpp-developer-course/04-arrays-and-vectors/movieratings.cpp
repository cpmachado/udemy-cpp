#include <iostream>
#include <array>

using namespace std;


int
main(void) {
    const int N = 5;
    array<string, N> movies;
    array<int, N> ratings;

    for(int i = 0; i < N; i++) {
        cout << "Enter a movie: ";
        getline(cin, movies[i]);
        cout << "Enter a rating: ";
        cin >> ratings[i];
        cin.get();
    }

    for(int i = 0; i < N; i++) {
        cout << "You rated '" << movies[i] << "' a " << ratings[i] << "/10" << endl;
    }

    return 0;
}
