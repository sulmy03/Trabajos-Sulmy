#include <iostream>
using namespace std;

int main() {
    int limite_maximo, base;

    do {
        cout << "INGRESE UN VALOR LIMITE MAXIMO POSITIVO: ";
        cin >> limite_maximo;
    } while (limite_maximo <= 0);

    do {
        cout << "INGRESAR UNA BASE ENTERA POSITIVA: ";
        cin >> base;
    } while (base <= 0);

    int potencia = 1;

    for (; potencia <= limite_maximo; potencia *= base) {
        cout << potencia << " ";
    }

    cout << endl;

    return 0;
}
