#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (cin >> n) {
        long long ceros_finales = 0;
        
        for (long long i = 5; n / i >= 1; i *= 5) {
            ceros_finales += n / i;
        }

        cout << ceros_finales << "\n";
    }

    return 0;
}