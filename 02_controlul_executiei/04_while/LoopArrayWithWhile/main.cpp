#include <iostream>
#include <string>

using namespace std;

int main() {
    string names [] = {"Carmen", "Ana", "Philip"};
    int index = 0;
    while (index < 3) {
        cout << "Name " << index << " : "
            << names[index] << endl;
        index++;
    }
    cout << "loop finished" << endl;

    return 0;
}
