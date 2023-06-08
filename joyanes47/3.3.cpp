#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    float a, b, c, d, e, f , denominador ,x, y;

    cout << "INGRESE EL VALOR A, B, C,:" <<endl;
    cin >> a >> b >> c;
    cout << "INGRESE EL VALOR  D, E, F:" <<endl;
    cin >> d >> e >> f;

    denominador = a * e - b * d;

    if (denominador == 0) 
     cout<< "NO SOLUCION \n:";
    else
    {
        x = (c * e - b * f) / denominador;
        y = (a * f - c * d) / denominador;
        cout << "LA SOLUCION DEL SISTEMA es\n:";
        cout << "x = " << x << "y = " << y <<endl;
    } 
        

    return 0;
} // MODIFICAR EL EJERCICIO PARA EL CASO QUE SI EL RESULTADO DE "X" ES POSITIVO, EL RESULTADO DE "Y", DEBERA SER ELEVADO AL CUADRADO, CASO CONTRARIO VOTARA "ERROR"


