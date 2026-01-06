#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        cout << i << endl;
        if (i == 2) {
            i = 0;
        }
    }

    return 0;
}
