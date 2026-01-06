#include <iostream>
#include <string>

using namespace std;

int main() {
    for (int i = 0; i < 2; i++) {
        cout << "i=" << i << endl;

        for (int j = 0; j < 2; j++) {
            cout << "j=" << j << endl;
        }
    }

    return 0;
}
