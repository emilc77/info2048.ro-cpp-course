#include <iostream>
#include <vector>

using namespace std;

void to_cout(vector<int> numere) {
    for (int i = 0; i < numere.size() ; i++) { // for int i = 0
        cout << numere.at(i) << " ";
    }
    cout << endl;
}

int main() {
    int numar = 123456;
    vector <int> cifre;

    do {
        int ultima_cifra = numar % 10;
        cifre.insert(cifre.begin(), ultima_cifra);

        numar = numar / 10;
    } while (numar != 0);

    to_cout(cifre); // 1 2 3 4 5 6

    return 0;
}