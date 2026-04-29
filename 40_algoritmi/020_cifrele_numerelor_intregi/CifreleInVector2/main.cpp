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

    while (numar != 0) {
        int rest = numar % 10;
        cifre.insert(cifre.begin(), rest);

        numar = numar / 10;
    }

    to_cout(cifre); // 1 2 3 4 5 6

    return 0;
}