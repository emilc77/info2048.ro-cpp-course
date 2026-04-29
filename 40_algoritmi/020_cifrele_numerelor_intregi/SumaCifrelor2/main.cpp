#include <iostream>

using namespace std;

int main() {
    int numar = 456;
    int suma = 0;

    while (numar != 0) {
        int rest = numar % 10;
        suma = suma + rest;

        numar = numar / 10;
    }

    cout << suma << endl;

    return 0;
}