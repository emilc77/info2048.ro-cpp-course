#include <iostream>

using namespace std;

int main() {
    int numar = 456;
    int produsul = 1;

    while (true) {
        int ultima_cifra = numar % 10;
        produsul = produsul * ultima_cifra;

        numar = numar / 10;
        if (numar == 0) {
            break;
        }
    }

    cout << produsul << endl;
    cout << numar << endl;

    return 0;
}
