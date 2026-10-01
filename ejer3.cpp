#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        long long movimientos_totales = 0;
        long long elemento_anterior;
        
        cin >> elemento_anterior;


        for (int i = 1; i < n; ++i) {
            long long elemento_actual;
            cin >> elemento_actual;

            if (elemento_actual < elemento_anterior) {
            
                movimientos_totales += (elemento_anterior - elemento_actual);
          
            } else {
              
                elemento_anterior = elemento_actual;
            }
        }

        cout << movimientos_totales << "\n";
    }

    return 0;
}