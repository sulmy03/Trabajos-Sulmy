#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "INGRESE UN ENTERO:";
    cin >> numero;

    int doble = numero * 2;
    int triple = numero * 3;
    cout << "EL DOBLE DE " << numero << "ES: " << doble << std::endl;
    cout << "EL TRIPLE DE " << numero << " ES: " << triple << std::endl;

    return 0;
}
