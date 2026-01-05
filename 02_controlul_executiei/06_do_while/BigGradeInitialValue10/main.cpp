#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // seed random generator
    srand(time(nullptr));

    // folosim rand()

    int grade = 10;
    do {
        grade = rand() % 10 + 1; // 1-10
        cout << "Grade: " << grade << endl;
    } while (grade != 10);

    cout << "Final grade: " << grade << endl;

    return 0;
}
