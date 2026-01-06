#include <iostream>

using namespace std;

int main() {
    int count = 0;
    for (int i = 55; i <= 2578; i++) {
        if (i % 19 == 0) {
            count++;
        }
    }
    cout << "Solution: " << count << endl;

    return 0;
}
