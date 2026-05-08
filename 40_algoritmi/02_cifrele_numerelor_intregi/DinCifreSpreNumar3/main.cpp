#include <iostream>

using namespace std;

int main() {
    int cifre [] = {1,2,3,4};
    int lungime_arr = 4;

    int numar = 0;
    for (int i = 0; i < lungime_arr; ++i) {
        numar *= 10;
        numar += cifre[i];
    }
    cout << numar << endl; // 1234

    return 0;
}