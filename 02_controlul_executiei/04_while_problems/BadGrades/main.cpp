#include <iostream>

using namespace std;

int main() {
    int grades [] = {10, 9, 7, 4, 5};
    int index = 0;
    while (index < 5) {
        if (grades[index] < 5) {
            cout << "Bad grade:" << grades[index] << endl;
        }
        index++;
    }
}
