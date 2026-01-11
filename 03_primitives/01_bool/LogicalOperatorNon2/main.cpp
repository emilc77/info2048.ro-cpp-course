#include <iostream>
using namespace std;


void porneste_lumina() {
    cout << "Lumina Pornita" << endl;
}
int main() {
    bool afara_noapte = true;
    bool afara_zi = !afara_noapte;
    cout << afara_zi << endl; // 0 (false)

    if (!afara_zi) {
        porneste_lumina();
    }
    if (afara_zi == false) {
        porneste_lumina();
    }
    if (afara_zi != true) {
        porneste_lumina();
    }
    return 0;
}
