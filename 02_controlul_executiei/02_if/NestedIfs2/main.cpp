#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    int age = rand() % 100; // 0-99
    bool male = rand() % 2 == 0; // true/false

    cout << "age=" << age << ", male=" << boolalpha << male << endl;
    if (male) {
        if (age > 60) {
            cout << "Old man" << endl;
        } else {
            cout << "Young man" << endl;
        }
    } else {
        if (age > 60) {
            cout << "Old woman" << endl;
        } else {
            cout << "Young woman" << endl;
        }
    }
    return 0;
}
