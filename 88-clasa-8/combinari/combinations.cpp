#include <iostream>
#include <vector>
using namespace std;

void to_cout(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void callOneLevel(vector<int> v, int n, int k, int lastUsedIndex, int level) {
    for (int i = lastUsedIndex + 1; i < n; i++) {
        v.at(level) = i + 1; // (afisam 1, 2, 3, 4, 5) in loc de (0, 1, 2, 3, 4)

        // k incepe de la 1, level incepe de la 0. De aceea +1
        if (level + 1 >= k) {
            // daca e ultimul nivel, afisez combinatia
            to_cout(v);
        } else {
            // daca nu, mergem mai departe
            callOneLevel(v, n, k, i, level + 1);
        }
    }
}

int main() {
    int n = 5;
    int k = 3;
    // vector de marimea K initializat cu zerouri care nu isi schimba marimea:
    // forever: v.size() == K
    vector<int> v(k);

    int level = 0;
    int lastUsedIndex = -1;
    callOneLevel(v, n, k, lastUsedIndex, level);

    return 0;
}
