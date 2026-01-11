#include <iostream>
using namespace std;

int main() {
    bool sambata_cu_soare = true;
    bool duminica_cu_soare = false;

    bool weekend_cu_soare = sambata_cu_soare;
    weekend_cu_soare = weekend_cu_soare && duminica_cu_soare;
    // linia de mai sus este echivalenta cu linia urmatoare
    weekend_cu_soare &= duminica_cu_soare;

    return 0;
}
