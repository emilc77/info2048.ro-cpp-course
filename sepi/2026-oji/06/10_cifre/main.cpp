#include <iostream>
#include <fstream>

using namespace std;

int cerinta_1(long long int n) {
    long long int copy_of_n = n;

    cout << n << endl;
    int digits [10] {}; // initializat cu 0

    bool uniq_digits = true;
    while (true) {
        int ultima_cifra = n % 10;
        if (digits[ultima_cifra] == 0) {
            digits[ultima_cifra] = 1;
        } else if (digits[ultima_cifra] == 1) {
            uniq_digits = false;
            break;
        }

        n = n / 10;
        if (n == 0) {
            break;
        }
    }

    n = copy_of_n;
    if (uniq_digits) {
        // ne intereseaza cifrele 4 din mijloc.

        // aruncam ultimele 3 cifre.
        n = n / 1000;

        // luam cele 4 din mijloc
        // TODO: avem o incurcatura, daca numerele acestea incep cu 0, ex. 0678
        // noi intoarcem 678.
        // Vedem...
        return n % 10000;
    } else {
        int ultimele_2 = n % 100;

        // aruncam ultimele 8 cifre.
        n = n / 100000000;

        return n * 100 + ultimele_2;
    }
}

int cerinta_2(long long int n) {
    return 0;
}

int main() {
    ifstream fisier_in("10cifre.in");
    if (!fisier_in.is_open()) {
        cerr << "Nu s-a putut deschide fisierul." << endl;
    }

    int c;
    long long int n;
    fisier_in >> c;
    fisier_in >> n;
    fisier_in.close();

    ofstream fisier_out("10cifre.out");
    if (c == 1) {
        fisier_out << cerinta_1(n);
    } else {
        fisier_out << cerinta_2(n);
    }
    fisier_out.close();

    return 0;
}
