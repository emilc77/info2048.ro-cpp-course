#include <iostream>

using namespace std;

int main() {
    int i = 0;
    while(i < 5) {
        cout << i << endl;
        if (i == 2) {
            continue;
        }
        i++;
    }

    return 0;
}
