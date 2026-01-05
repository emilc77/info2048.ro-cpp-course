#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    // folosim rand()
    int number = rand() % 20; // 0-19
    if (number != 13) {
        cout << "not so lucky ...." << endl;
    } else {
        cout << "My lucky number!" << endl;
    }

    return 0;
}
