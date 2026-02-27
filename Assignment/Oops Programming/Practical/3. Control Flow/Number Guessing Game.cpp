#include <iostream>
using namespace std;

int main() {
    int guess, number = 25;

    while (true) {
        cout << "Guess number (1-30): ";
        cin >> guess;

        if (guess > number)
            cout << "Too High!\n";
        else if (guess < number)
            cout << "Too Low!\n";
        else {
            cout << "Correct!";
            break;
        }
    }
    return 0;
}
