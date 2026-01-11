#include <iostream>
using namespace std;

int main() {
    bool pisica_racita = true;
    bool catel_cu_purici = false;
    bool mergem_veterinar = pisica_racita || catel_cu_purici;
    cout << mergem_veterinar << endl; // 1 (true)

    return 0;
}
