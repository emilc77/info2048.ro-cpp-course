#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 1000; i++) {
        int number = 7 * i + 6;
        if (number < 100) {
            cout << number << endl;
        }
    }
    return 0;
}
