#include <iostream>

using namespace std;

int main() {
    int numar = 6;
    bool numar_par = numar % 2 == 0;
    if (numar_par) {
        cout << "Numarul este par" << endl;
    }

    return 0;
}