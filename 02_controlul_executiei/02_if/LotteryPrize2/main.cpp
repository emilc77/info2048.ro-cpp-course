#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // seed random generator
    srand(time(nullptr));

    // There is a bug in the rand(),
    // firt number is always 7k+6
    // So numbersMatched ends 6 every time.
    // We run rand() one time to scramble it a little
    rand();

    int numbersMatched = rand() % 7; // 0-6
    cout << numbersMatched << endl;
	if (numbersMatched == 6) {
        cout << "Jackpot, millionare!" << endl;
    } else if (numbersMatched == 5) {
        cout << "Enough money!" << endl;
    } else if (numbersMatched == 4) {
        cout << "Some money." << endl;
    } else {
        cout << "nothing...." << endl;
    }

    return 0;
}
