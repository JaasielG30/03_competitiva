#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (cin >> n) {

        long long suma_esperada = n * (n + 1) / 2;
        long long suma_actual = 0;

        for (int i = 0; i < n - 1; ++i) {
            long long numero;
            cin >> numero;
            suma_actual += numero;
        }

        cout << suma_esperada - suma_actual << "\n";
    }

    return 0;
}