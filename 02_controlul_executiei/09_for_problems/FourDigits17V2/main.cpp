#include <iostream>

using namespace std;

int main() {
    for (int a = 1; a < 10; a++) {
        for (int b = a + 1; b < 10; b++) {
            for (int c = b + 1; c < 10; c++) {
                for (int d = c + 1; d < 10; d++) {
                    if (a + b + c + d == 17) {
                        cout << a << b << c << d << endl;
                    }
                }
            }
        }
    }
    return 0;
}
