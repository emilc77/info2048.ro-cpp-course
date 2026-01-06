#include <iostream>

using namespace std;

int main() {
    int count = 0;
    for (int i = 0; i <= 1000000; i++) {
        int lastDigit = i % 10;
        if (lastDigit == 4) {
            count++;
        }
    }
    cout << "Solution: " << count << endl;

    return 0;
}
