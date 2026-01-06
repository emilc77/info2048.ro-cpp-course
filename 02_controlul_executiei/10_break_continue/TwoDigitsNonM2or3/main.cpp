#include <iostream>

using namespace std;

int main() {
    for (int i = 10; i < 100; i++) {
        if (i % 2 == 0) {
            continue;
        }
        if (i % 3 == 0) {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}
