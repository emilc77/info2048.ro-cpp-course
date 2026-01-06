#include <iostream>

using namespace std;

int main() {
    for (int a = 1; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            for (int c = 0; c < 10; c++) {
                for (int d = 0; d < 10; d++) {
                    if (a < b && b < c && c < d
                        && a + b + c + d == 17) {
                        cout << a << b << c << d << endl;
                    }
                }
            }
        }
    }

    return 0;
}
