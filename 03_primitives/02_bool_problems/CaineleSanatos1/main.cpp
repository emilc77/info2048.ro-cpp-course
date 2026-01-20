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

    bool cainele_sanatos = rand() % 2 == 0; // true/false
    bool cainele_bolnav = !cainele_sanatos;
    cout << "Sanatos: " << cainele_sanatos << endl;
    cout << "Bolnav: " << cainele_bolnav << endl;

    return 0;
}
