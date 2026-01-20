#include <iostream>
using namespace std;

int main() {
    bool eu_am_cal = true;
    bool tu_ai_cal = false;
    bool suntem_impreuna = eu_am_cal = tu_ai_cal; // !!! HERE
    cout << "eu am cal: " << eu_am_cal << endl;
    cout << "tu ai cal: " << tu_ai_cal << endl;
    cout << "suntem impreuna: " << suntem_impreuna << endl;

    return 0;
}
