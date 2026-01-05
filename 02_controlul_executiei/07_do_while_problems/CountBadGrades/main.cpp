#include <iostream>

using namespace std;

int main() {
    int grades [] = {10, 9, 7, 4, 5, 7, 2, 5};
    int badGrades = 0;

    int index = 0;
    do {
        if (grades[index] < 5) {
            badGrades++;
        }
        index++;
    } while (index < 8);

    cout << "Number of bad grades: " << badGrades << endl;
}
