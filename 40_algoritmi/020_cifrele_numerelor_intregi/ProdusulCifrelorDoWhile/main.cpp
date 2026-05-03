#include <iostream>

using namespace std;

int main() {
    int numar = 0;
    int produsul = 1;
    do {
        int ultima_cifra = numar % 10;
        produsul = produsul * ultima_cifra;
        numar = numar / 10;
    } while (numar != 0);
    cout << produsul << endl;

    return 0;
}
