#include <iostream>
#define PI 3.14159
using namespace std;

int main() {
    double radio;

    do {
        cout << "INGRESAR RADIO DE LA ESFERA(POSITIVO): ";
        cin >> radio;
    } while (radio <= 0);
   
    double area = 4 * PI * radio * radio;
    double volumen = 4.0 / 3.0 * PI * radio * radio * radio;

    cout << "EL AREA ES: " << area << endl;
    cout << "EL VOLUMEN ES : " << volumen << endl;

    return 0;
}