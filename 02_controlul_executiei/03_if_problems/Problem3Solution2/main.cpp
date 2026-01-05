#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    // folosim rand()
    int age = rand() % 100; // 0-99
    if (age < 18) {
        cout << "Child" << endl;
    } else if (age < 60) {
        cout << "Grown Up" << endl;
    } else if (age >= 60) {
        cout << "Old Person" << endl;
    }

    return 0;
}
