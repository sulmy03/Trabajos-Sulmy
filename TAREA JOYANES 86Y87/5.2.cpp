#include <iostream>
using namespace std;

int main() {
  // Primer bucle A
  for (int n = 10; n > 0; n = n - 2) {
    cout << "HOLA ";
    cout << n << endl;
  }

  // Segundo bucle B
  for (double m = 2; m > 0; m = m - 0.5) {
    cout << m << " ";
  }

  return 0;
}
//SALIDA DEL BUCLE A) es HOLA 10,HOLA 8,HOLA 6,HOLA 4,HOLA 2
//SALIDA DEL BUCLE B) es 21.5 Y 10.5