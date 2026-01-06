#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    while (true) {
        int grade = rand() % 10 + 1; // 1-10
        if (grade >= 10) {
            cout << "Exceptional!" << endl;
            break;
        }
    }

    return 0;
}
