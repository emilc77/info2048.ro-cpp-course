#include <iostream>

using namespace std;

int main() {
    int numar = 456;
    int cifra_unitatilor = numar % 10;

    numar = numar / 10; // 45
    int cifra_zecilor = numar % 10;
    cout << cifra_zecilor << endl;

    return 0;
}