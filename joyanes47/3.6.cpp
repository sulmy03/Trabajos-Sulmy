#include<cstdlib>
#include<iostream>
using namespace std;

int main() {
    float pies, yardas, pulgadas, centimetros, metros;

    cout << "INGRSE LA MEDIDA EN PIES: ";
    cin >> pies;
    yardas = pies / 3;
    pulgadas = pies * 12;
    centimetros = pulgadas * 2.54;
    metros = centimetros / 100;
    cout << "EQUIVALE EN:" <<endl;
    cout << "YARDAS: " << yardas <<endl;
    cout << "PULGADAS: " << pulgadas <<endl;
    cout << "CENTIMETROS: " << centimetros <<endl;
    cout << "METROS: " << metros <<endl;

    return 0;
}
