#include <iostream>

using namespace std;

int main() {
    int distantaCaine = 0;
    int distantaIepure = 0;
    int sarituraIepure = 60; // cm
    int sarituraCaine = 5 * sarituraIepure / 2; // cm
    int distantaInitiala = 60 * 100; // cm
    while (true) {
        distantaIepure += 3 * sarituraIepure;
        distantaCaine += 2 * sarituraCaine;
        bool prins = distantaCaine >= distantaIepure
                + distantaInitiala;
        if (prins) {
            cout << distantaCaine << " cm" << endl;
            cout << (distantaCaine / 100) << " m" << endl;
            break;
        }
    }

    return 0;
}
