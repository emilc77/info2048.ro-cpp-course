#include <iostream>

using namespace std;

int main() {
    int numar = 456;
    int produsul = 1;
    while (numar != 0) {
        int ultima_cifra = numar % 10;
        produsul = produsul * ultima_cifra;
        numar = numar / 10;
    }
    cout << produsul << endl;

    return 0;
}
