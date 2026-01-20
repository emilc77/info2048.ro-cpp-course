#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));
    // There is a bug in the rand(),
    // firt number is always even
    // We run rand() one time to scramble it a little
    rand();

    bool sunt_fericit = rand() % 2 == 0; // true/false
    if (sunt_fericit) {
        cout << "Uiiiiii" << endl;
    } else {
        cout << "Aoleu" << endl;
    }

    return 0;
}
