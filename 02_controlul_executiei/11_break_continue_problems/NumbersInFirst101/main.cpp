#include <iostream>

using namespace std;

int main() {
    int allDigits = 0;
    for (int i = 1; i < 100; i++) {
        int digitsCurrentNumber;
        if (i < 10) {
            digitsCurrentNumber = 1;
        } else {
            digitsCurrentNumber = 2;
        }
        allDigits = allDigits + digitsCurrentNumber;
        if (allDigits >= 101) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
