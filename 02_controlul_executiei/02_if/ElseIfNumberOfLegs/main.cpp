#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // seed random generator
    srand(time(nullptr));

    // folosim rand()
    int numberOfLegs = rand() % 5; // 0-4
    if (numberOfLegs == 0) {
        cout << "Snake, Snail" << endl;
    } else if (numberOfLegs == 2) {
        cout << "Birds" << endl;
    } else if (numberOfLegs == 4) {
        cout << "Dogs, Cats" << endl;
    } else {
        cout << "Really ?!?! " << endl;
    }

    return 0;
}
