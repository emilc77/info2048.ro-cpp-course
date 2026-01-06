#include <iostream>

using namespace std;

int main() {
    for (int a = 1; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            if ((a + b) % 5 == 0) {
                cout << a << b << endl;
            }
        }
    }

    return 0;
}
