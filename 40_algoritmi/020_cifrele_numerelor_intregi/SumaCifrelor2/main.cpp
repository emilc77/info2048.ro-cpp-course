#include <iostream>

using namespace std;

int main() {
    int numar = 456;
    int suma = 0;

    while (numar != 0) {
        int ultima_cifra = numar % 10;
        suma = suma + ultima_cifra;

        numar = numar / 10;
    }

    cout << suma << endl;

    return 0;
}