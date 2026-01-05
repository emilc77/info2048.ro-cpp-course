#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    for(int i = 1; i <= 20; i++) {
        // intre 1 si 10
        int rand_number = rand() % 10 + 1;
        cout << rand_number << endl;
    }
    return 0;
}
