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
    int cifre [] = {1,2,3,4,5,6};
    int lungime_arr = 6;
    int numar = 0;
    for (int i = 0; i < lungime_arr; ++i) {
        numar += cifre[i] * puterea_lui_10(lungime_arr - 1 - i);
    }
    cout << numar << endl; // 123456

    return 0;
}