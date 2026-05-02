#include <iostream>

using namespace std;

int puterea_lui_10(int puterea) {
    int numar = 1;
    for (int i = 0; i < puterea; ++i) {
        numar *= 10;
    }
    return numar;
}

int main() {
    cout << puterea_lui_10(3) << endl;

    return 0;
}