#include <iostream>
using namespace std;

int main() {
    bool var1 = true;
    bool var2 = false;

    bool var3 = var1 == var2;
    cout << var3 << endl; // 0 (false)

    bool var4 = var1 != var2;
    cout << var4 << endl; // 1 (true)

    return 0;
}

