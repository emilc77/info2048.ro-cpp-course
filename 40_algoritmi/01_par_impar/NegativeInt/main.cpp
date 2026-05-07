#include <iostream>

using namespace std;

int main() {
    int cat = -7 / 2;
    int rest = -7 % 2;
    cout << cat << endl; // -3
    cout << rest << endl; // -1

    cat = -6 / 2;
    rest = -6 % 2;
    cout << cat << endl; // -3
    cout << rest << endl; // 0

    return 0;
}