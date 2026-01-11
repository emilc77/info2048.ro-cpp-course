#include <iostream>
using namespace std;

int main() {
    bool tom_jerry = true;
    bool garfield = false;

    bool distractie = tom_jerry;
    distractie = distractie || garfield;
    // linia de mai sus este echivalenta cu linia urmatoare
    distractie |= garfield;

    return 0;
}
