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
    bool am_bani_de_veterinar = rand() % 2 == 0; // true/false
    bool mergem_vet = !caine_sanatos && am_bani_de_veterinar;

    cout << "Sanatos? " << caine_sanatos << endl;
    cout << "Bani? " << am_bani_de_veterinar << endl;
    cout << "Mergem? " << mergem_vet << endl;

    return 0;
}
