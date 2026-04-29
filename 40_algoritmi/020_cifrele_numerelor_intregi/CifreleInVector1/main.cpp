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
        cifre.push_back(rest);

        numar = numar / 10;
    }

    to_cout(cifre); // 6 5 4 3 2 1

    return 0;
}