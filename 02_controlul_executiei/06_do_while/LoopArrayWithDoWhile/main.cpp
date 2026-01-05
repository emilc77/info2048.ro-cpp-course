#include <iostream>
#include <string>

using namespace std;

int main() {
    string names [] = {"Carmen", "Ana", "Philip"};
    int index = 0;
    do {
        cout << "Name " << index << " : "
            << names[index] << endl;
        index++;
    } while (index < 3);
    cout << "loop finished" << endl;

    return 0;
}
