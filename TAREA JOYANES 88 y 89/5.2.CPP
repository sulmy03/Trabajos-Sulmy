#include <iostream>

using namespace std;

int main() {
    int m;
    

    do {
        cout << "INGRESAR UN VALOR POSITIVO PARA m: ";
        cin >> m;
    } while (m <= 0);

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }
    
   
    for (int i = m - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
