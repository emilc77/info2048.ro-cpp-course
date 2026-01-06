#include <iostream>

using namespace std;

int main() {
    for (int a = 1; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            int number = 10 * a + b;
            if (number % 3 != 2) { // 3k + 2
                continue;
            }
            if (a + b != 11) {
                continue;
            }
            cout << number << endl;
        }
    }

    return 0;
}
