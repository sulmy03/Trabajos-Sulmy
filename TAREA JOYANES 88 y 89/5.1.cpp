#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int n, i = 1, suma = 0;

    do {
        cout << "INGRESAR UN NUMERO n > 0: ";
        cin >> n;
    } while (n <= 0);

    while (i <= n) {
        suma += i;
        i++;
    }

    cout << "EL VALOR DE LA SUMA ES: " << suma << endl;
    return 0;
}


