#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];

    int sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    bool exista = false;

    for (int x = 0; x < N; x++) {
        int s = 0;

        for (int i = 0; i < x; i++) {
            s += arr[i];
        }

        if (sum - s == s) {
            exista = true;
            cout << x << endl;
            break;
        } else continue;
    }

    if (exista == false) {
        cout << 0 << endl;
    }
}
