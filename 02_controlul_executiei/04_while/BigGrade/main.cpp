#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    int grade = 0;

    while (grade != 10) {
        grade = rand() % 10 + 1; // 1-10
        cout << "Grade: " << grade << endl;
    }

    cout << "Final grade: " << grade << endl;

    return 0;
}
