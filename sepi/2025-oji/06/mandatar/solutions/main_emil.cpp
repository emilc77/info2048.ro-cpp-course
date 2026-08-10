#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

bool is_prime(int numar) {
    if (numar <= 3) {
        return true;
    }

    if (numar % 2 == 0) {
        // par
        return false;
    }

    int max_limit = numar / 2;
    for (int i = 3; i < max_limit; i = i+2) {
        if (numar % i == 0) {
            // par
            return false;
        }
    }
    return true;
}

vector<int> descompune(int numar) {
    vector<int> factori_primi;

    while (numar > 1) {
        if (numar % 2 == 0) {
            // par
            factori_primi.push_back(2);
            numar = numar / 2;
            continue;
        }

        for (int i = 3; i <= numar; i = i+2) {
            if (numar % i == 0) {
                factori_primi.push_back(i);
                numar = numar / i;
                break;
            }
        }
    }

    return factori_primi;
}



int cerinta_1(vector<int> a) {
    int prim = -1;
    for (int ai : a) {
        if (is_prime(ai)) {
            if (ai > prim) {
                prim = ai;
            }
        }
    }

    return prim;
}

int cerinta_2(vector<int> a) {
    return 2;
}
int cerinta_3() {
    return 3;
}

int main() {
    ifstream fisier_in("mandatar.in");
    if (!fisier_in.is_open()) {
        cerr << "Nu s-a putut deschide fisierul." << endl;
    }

    int cerinta;
    fisier_in >> cerinta;

    int n;
    fisier_in >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int value;
        fisier_in >> value;
        a.push_back(value);
    }
    fisier_in.close();

    int raspuns;
    if (cerinta == 1) {
        raspuns = cerinta_1(a);
    } else if (cerinta == 2) {
        raspuns = cerinta_2(a);
    } else {
        raspuns = cerinta_3();
    }

    ofstream fisier_out("mandatar.ok");
    fisier_out << raspuns;
    fisier_out.close();

    return 0;
}
