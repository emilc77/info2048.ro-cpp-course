#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i < 100000000; i++) {
        if (i % 12 == 0 && i % 28 == 0) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
