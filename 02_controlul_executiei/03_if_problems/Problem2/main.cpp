#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    // folosim rand()
    bool sickDog = rand() % 2 == 0; // true/false
    if (!sickDog) {
        cout << "Let's have a movie!" << endl;
    } else {
        cout << "Meet the vet" << endl;
    }

    return 0;
}
