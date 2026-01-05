#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    // folosim rand()
    bool sickDog = rand() % 2 == 0; // true/false
    if (sickDog) {
        cout << "Meet the vet" << endl;
    } else {
        cout << "Let's have a movie!" << endl;
    }

    return 0;
}
