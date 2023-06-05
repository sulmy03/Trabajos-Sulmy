#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    const float G = 6.673e-8;
    float masa1, masa2, distancia, fuerza;

    cout << "INTRODUZCA LA MASA DE DOS CUERPOS EN (GRAMOS): ";
    cin >> masa1 >> masa2;
    cout << "INTRODUZCA LA DISTANCIA ENTRE ELLOS EN (CENTIMETROS): ";
    cin >> distancia;
    if (( masa1 <= 0 ) || ( masa2 <= 0) || ( distancia <= 0 ))
      cout << " NO SOLUCION\n";
 else
 {
     fuerza = G * masa1 * masa2 / (distancia * distancia);
      cout << " LA SOLUCION ES: \n";
      cout << " FUERZA EN DINAS = "<< fuerza << endl;
}

    return 0;
}
