#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    int age = rand() % 100; // 0-99
    bool male = rand() % 2 == 0; // true/false
    if (male) {
        if (age > 60) {
            cout << "Old man" << endl;
        }
    }
    return 0;
}
