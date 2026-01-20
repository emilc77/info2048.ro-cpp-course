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

    bool eu_am_cal = rand() % 2 == 0; // true/false
    bool tu_ai_cal = rand() % 2 == 0; // true/false
    bool suntem_impreuna = eu_am_cal == tu_ai_cal;

    if (suntem_impreuna) {
        cout << "Petrecem timpul impreuna" << endl;
    }

    return 0;
}
