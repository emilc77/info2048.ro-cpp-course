#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    int numbersMatched = rand() % 7; // 0-6
	if (numbersMatched == 6) {
        cout << "Jackpot, millionare!" << endl;
    } else {
        if (numbersMatched == 5) {
            cout << "Enough money!" << endl;
        } else {
            if (numbersMatched == 4) {
                cout << "Some money." << endl;
            } else {
                cout << "nothing...." << endl;
            }
        }
    }

    return 0;
}
