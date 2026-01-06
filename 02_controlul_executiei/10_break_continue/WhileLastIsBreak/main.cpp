#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    int value = rand() % 10 + 1; // 1-10
    while (value != 10) {
        cout << "Not 10 yet..." << endl;
        value = rand() % 10 + 1; // 1-10
        break;
    }

    return 0;
}
