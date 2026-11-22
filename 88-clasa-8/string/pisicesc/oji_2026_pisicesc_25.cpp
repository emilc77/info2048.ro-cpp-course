#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int problema_1(string line) {
    set<char> vowels;
    for (char letter : line) {
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
            vowels.insert(letter);
        }
    }
    return vowels.size();
}

int problema_2(string line) {
    int count = 0;
    // size_t = unsigned long
    size_t currentIndex = -1;
    while (true) {
        currentIndex = line.find("mau", currentIndex + 1);
        if (currentIndex == string::npos) {
            return count;
        } else {
            count++;
        }
    }
}

// a trebuit sa intorc si stringul si countul
// Asa ca am trimis un map cu un singur element.
map<string, int> problema_3(string line, int stringSize) {
    map<string, int> substringsCount;
    for (int index = 0; index < line.size() - stringSize + 1; index++) {
        string substring = line.substr(index, stringSize);
        substringsCount[substring]++;
    }

    int mostFrequentCount = 0;
    vector<string> frequentSubstrings;
    for (const auto &it : substringsCount) {
        if (it.second > mostFrequentCount) {
            mostFrequentCount = it.second;
            frequentSubstrings.clear();
            frequentSubstrings.push_back(it.first);
        } else if (it.second == mostFrequentCount) {
            frequentSubstrings.push_back(it.first);
        }
    }

    if (mostFrequentCount == 1) {
        // n-am gasit duplicate -> empty map
        return {};
    }

    sort(frequentSubstrings.begin(), frequentSubstrings.end());
    return {{frequentSubstrings[0], mostFrequentCount}};
}


string problema_3(string line) {
    int countByNow = 0;
    string solutionByNow;
    for (int stringSize = 2; stringSize < line.size(); stringSize++) {
        map<string, int> rezolvare = problema_3(line, stringSize);
        if (rezolvare.empty()) {
            if (stringSize == 2) {
                return line;
            } else {
                return solutionByNow;
            }
        } else {
            string newSolution;
            int newCount = 0;
            for (const auto &it : rezolvare) {
                newSolution = it.first;
                newCount = it.second;
            }
            if (newCount < countByNow) {
                return solutionByNow;
            } else {
                solutionByNow = newSolution;
                countByNow = newCount;
            }
        }
    }
    return solutionByNow;
}


// https://www.info2048.ro/problem.html?problemId=25
int main() {
    ifstream fisier_in("pisicesc.in");
    if (!fisier_in.is_open()) {
        cerr << "Nu s-a putut deschide fisierul." << endl;
    }

    string linia1;
    getline(fisier_in, linia1); // citim prima linie ca text
    int problema = stoi(linia1); // o transformam in numar

    string line;
    getline(fisier_in, line); // citim a doua linie ca text

    fisier_in.close();

    cout << "Problema: " << problema << endl;
    cout << "Line: " << line << endl;

    ofstream fisier_out("pisicesc.out");

    if (problema == 1) {
        int raspuns = problema_1(line);
        fisier_out << raspuns;
    } else if (problema == 2) {
        int raspuns = problema_2(line);
        fisier_out << raspuns;
    } else if (problema == 3) {
        string raspuns = problema_3(line);
        fisier_out << raspuns;
    } else {
        cout << "Problema necunoscuta." << endl;
    }

    fisier_out.close();

    return 0;
}
