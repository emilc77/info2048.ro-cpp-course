#include <iostream>
using namespace std;

int main() {
    bool pisica_racita = true;
    bool masina_reparata = false;
    bool mergem_veterinar = pisica_racita && masina_reparata;
    cout << mergem_veterinar << endl; // 0 (false)

    return 0;
}
