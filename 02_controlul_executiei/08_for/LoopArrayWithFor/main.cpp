#include <iostream>
#include <string>

using namespace std;

int main() {
    string names [] = {"Carmen", "Ana", "Philip"};
    for (int i = 0; i < 3; i++) {
        cout << "Name " << i << " : " << names[i] << endl;
    }
    cout << "loop finished" << endl;

    return 0;
}
