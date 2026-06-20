#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int cerinta_1(long long int n) {
    const long long int copy_of_n = n;

    cout << n << endl;
    int digits [10] {}; // initializat cu 0

    bool uniq_digits = true;
    while (true) {
        int ultima_cifra = n % 10;
        if (digits[ultima_cifra] == 0) {
            digits[ultima_cifra] = 1;
        } else if (digits[ultima_cifra] == 1) {
            uniq_digits = false;
            break;
        }

        n = n / 10;
        if (n == 0) {
            break;
        }
    }

    n = copy_of_n;
    if (uniq_digits) {
        // ne intereseaza cifrele 4 din mijloc.

        // aruncam ultimele 3 cifre.
        n = n / 1000;

        // luam cele 4 din mijloc
        // TODO: avem o incurcatura, daca numerele acestea incep cu 0, ex. 0678
        // noi intoarcem 678.
        // Vedem...
        return n % 10000;
    } else {
        int ultimele_2 = n % 100;

        // aruncam ultimele 8 cifre.
        n = n / 100000000;

        return n * 100 + ultimele_2;
    }
}

/** toate au 2 cifre maxim. */
bool uniq_digits(int year2, int month = -1, int day = -1,
    int hour = -1, int minute = -1) {

    vector<int> digits;
    digits.push_back(year2 / 10);
    digits.push_back(year2 % 10);

    if (month != -1) {
        digits.push_back(month / 10);
        digits.push_back(month % 10);
    }
    if (day != -1) {
        digits.push_back(day / 10);
        digits.push_back(day % 10);
    }
    if (hour != -1) {
        digits.push_back(hour / 10);
        digits.push_back(hour % 10);
    }
    if (minute != -1) {
        digits.push_back(minute / 10);
        digits.push_back(minute % 10);
    }

    int possible_digits [10] {}; // initializat cu 0
    for (int digit : digits) {
        if (possible_digits[digit] == 0) {
            possible_digits[digit] = 1;
        } else if (possible_digits[digit] == 1) {
            return false;
        }
    }

    // toate diferite
    return true;
}

int cerinta_2(int year4) {
    // zzllaahhmm
    bool bisect = year4 % 400 == 0 || (year4 % 4 == 0 && year4 % 100 != 0);

    cout << uniq_digits(10,23,45,67,89) << endl;

    int counter = 0;
    int year2 = year4 % 100;
    if (uniq_digits(year2)) {
        for (int month = 1; month <= 12; ++month) {
            if (!uniq_digits(year2, month)) {
                break;
            }
            int days_in_month = 31;
            if (month == 4 || month == 6 || month == 9 || month == 11) {
                days_in_month = 30;
            } else if (month == 2) {
                if (bisect) {
                    days_in_month = 29;
                } else {
                    days_in_month = 28;
                }
            }

            for (int day = 1; day <= days_in_month; ++day) {
                if (!uniq_digits(year2, month, day)) {
                    break;
                }

                for (int hour = 0; hour <= 23; ++hour) {
                    if (!uniq_digits(year2, month, day, hour)) {
                        break;
                    }

                    for (int minute = 0; minute <= 59; ++minute) {
                        if (uniq_digits(year2, month, day, hour, minute)) {
                            counter++;
                        }
                    }
                }
            }
        }
    }

    return counter;
}

int main() {
    ifstream fisier_in("10cifre.in");
    if (!fisier_in.is_open()) {
        cerr << "Nu s-a putut deschide fisierul." << endl;
    }

    int c;
    long long int n;
    fisier_in >> c;
    fisier_in >> n;
    fisier_in.close();

    ofstream fisier_out("10cifre.out");
    if (c == 1) {
        fisier_out << cerinta_1(n);
    } else {
        fisier_out << cerinta_2(static_cast<int>(n));
    }
    fisier_out.close();

    return 0;
}
