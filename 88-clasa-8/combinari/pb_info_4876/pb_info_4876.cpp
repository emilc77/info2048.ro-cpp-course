#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int n;
int k;
vector<string> rezultate;

void to_cout(vector<int> v) {
    if (v.at(0) != 1) {
        return;
    }
    if (v.at(v.size() - 1) != n) {
        return;
    }

    string line;
    for (int i = 0; i < v.size(); i++) {
        line += to_string(v.at(i)) + " ";
    }
    rezultate.push_back(line.substr(0, line.size() - 1));
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

    ifstream fisier_in("combinari1n.in");
    if (!fisier_in.is_open()) {
        cerr << "Nu s-a putut deschide fisierul." << endl;
    }

    fisier_in >> n >> k;

    // vector de marimea K initializat cu zerouri care nu isi schimba marimea:
    // forever: v.size() == K
    vector<int> v(k);

    int level = 0;
    int lastUsedIndex = -1;
    callOneLevel(v, n, k, lastUsedIndex, level);

    ofstream fisier_out("combinari1n.out");

    for (const auto& line : rezultate) {
        fisier_out << line << endl;
    }

    fisier_out.close();

    return 0;
}
