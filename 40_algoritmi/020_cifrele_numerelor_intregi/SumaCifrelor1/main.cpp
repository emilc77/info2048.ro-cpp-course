#include <iostream>

using namespace std;

int main() {
    int numar = 456;
    int suma = 0;

    while (true) {
        int rest = numar % 10;
        suma = suma + rest;

        numar = numar / 10;
        if (numar == 0) {
            break;
        }
    }

    cout << suma << endl;

    return 0;
}