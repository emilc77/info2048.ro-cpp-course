#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    for(int i = 1; i <= 20; i++) {
        // intre 1 si 10
        int rand_number = rand() % 10 + 1;
        cout << rand_number << endl;
    }

    return 0;
}
