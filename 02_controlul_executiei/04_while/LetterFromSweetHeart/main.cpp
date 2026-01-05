#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function Prototype (Declaration)
bool theLetterHasCome();

int main() {
    // seed random generator
    srand(time(nullptr));

    // There is a bug in the rand(),
    // firt number is even
    // So our boolean generator is always true from the start
    // We run rand() one time to scramble it a little
    rand();

    while (!theLetterHasCome()) {
        cout << "sorrow..." << endl;
    }
    cout << ":-) HAPPY!!!!" << endl;
}
bool theLetterHasCome() {
    return rand() % 10 == 0; // true/false
}
