#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

int main() {
    ifstream fisier_in("pisicesc.in");
    if (!fisier_in.is_open()) {
        cerr << "Nu s-a putut deschide fisierul." << endl;
    }

    int problema;
    fisier_in >> problema;
    fisier_in.ignore(numeric_limits<streamsize>::max(), '\n'); // consuma '\n' ramas dupa >>

    string line;
    getline(fisier_in, line); // citeste toata linia a doua

    fisier_in.close();

    cout << "Problema: " << problema << endl;
    cout << "Line: " << line << endl;

    ofstream fisier_out("pisicesc.out");
    fisier_out << "Aici implementezi logica si aflii raspunsul.";
    fisier_out.close();

    return 0;
}
