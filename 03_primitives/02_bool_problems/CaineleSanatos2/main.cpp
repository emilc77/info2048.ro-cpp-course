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

    bool caine_sanatos = rand() % 2 == 0; // true/false
    bool caine_bolnav = !caine_sanatos;
    cout << "Sau " << (caine_sanatos || caine_bolnav) << endl;
    cout << "Si: " << (caine_sanatos && caine_bolnav) << endl;

    return 0;
}
