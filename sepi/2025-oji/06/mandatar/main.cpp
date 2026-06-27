#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fisier_in("mandatar.in");
    if (!fisier_in.is_open()) {
        cerr << "Nu s-a putut deschide fisierul." << endl;
    }

    // read you variables here.
    // ...
    fisier_in.close();

    ofstream fisier_out("mandatar.ok");
    fisier_out << "Aici implementezi logica si aflii raspunsul.";
    fisier_out.close();

    return 0;
}
