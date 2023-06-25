#include<iostream>
#define m 20
using namespace std;

int main() {
    int i, suma = 0;
    for(i = 1; i <= m; i++) {
        suma += 2 * i;
    }
    cout << "LA SUMA DE LOS 20 PRIMEROS PARES: " << suma << endl;
    cout << "MEDIANTE FORMULA: " << (2 + 2 * m) * m / 2 << endl;
    return 0;
}
