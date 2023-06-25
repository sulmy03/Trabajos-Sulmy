#include <iostream>
using namespace std;
int main() {
    int n;
    int numero;
    int mayor, menor, suma;

    do {
        cout << "INGRESAR EL VALOR DE N (MAYOR QUE 0): ";
        cin >> n;
    } while (n <= 0);

    
   cout << "INGRESE EL PRIMER NUMERO: ";
    cin >> numero;

    mayor = menor = suma = numero;

   
    for (int i = 2; i <= n; i++) {
        cout << "INGRESE EL NUMERO:" << i << ": ";
      cin >> numero;

        if (numero > mayor) {
            mayor = numero;
        }

        if (numero < menor) {
            menor = numero;
        }

        suma += numero;
    }
    
    double media = static_cast<double>(suma) / n;
    cout << "EL NUMERO MAYOR ES: " << mayor <<endl;
    cout << "EL NUMERO MENOR ES: " << menor <<endl;
    cout << "LA SUMA DE LOS NUMEROS ES: " << suma <<endl;
    cout << "LA MEDIA DE LOS NUMEROS ES: " << media <<endl;

    return 0;
}
