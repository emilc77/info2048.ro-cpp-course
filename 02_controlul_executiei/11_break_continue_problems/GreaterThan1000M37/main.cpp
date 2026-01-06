#include <iostream>

using namespace std;

int main() {
    for (int i = 1001; i < 1000000; i++) {
        if (i % 37 == 0) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
