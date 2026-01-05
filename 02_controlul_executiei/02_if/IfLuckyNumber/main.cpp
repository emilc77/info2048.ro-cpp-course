#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    // folosim rand()
    int number = rand() % 20; // 0-19
    if (number == 13) {
        cout << "My lucky number!" << endl;
    } else {
        cout << "not so lucky ...." << endl;
    }

    return 0;
}
