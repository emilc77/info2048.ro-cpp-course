#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int EDGE = 4;
int position = 0;

bool checkEdge() {
    if (position > EDGE) {
        cout << "CRASH!" << endl;
    }
    return EDGE > position;
}

void step() {
    cout << position << " -> ";
    position++;
    cout << position << endl;
}

int main() {
    // seed random generator
    srand(time(nullptr));

    // There is a bug in the rand(),
    // firt number is even
    // So our boolean generator is always true from the start
    // We run rand() one time to scramble it a little
    rand();

    position = rand() % 5; // 0-4
    cout << "Initial position: " << position << endl;

    do {
        step();
    } while (checkEdge());
}
