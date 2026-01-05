#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    bool male = rand() % 2 == 0; // true/false
    cout << "male: " << boolalpha << male << endl;

    return 0;
}
