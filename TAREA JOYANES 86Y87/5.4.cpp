#include <iostream>
using namespace std;

int main() {
  int m = 3;
  int n = 5;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++)
      cout << " *";
    cout << endl;
  }

  cout << endl;

  for (int i = n; i > 0; i--) {
    for (int j = m; j > 0; j--)
      cout << " * ";
    cout << endl;
  }

  return 0;
}
//  LA SALIDA DEL SEGMENTO ES: UN TRIANGULO FORMADO POR ASTERISCOS 
//  UN RECTANGULO FORMADO POR ASTERISCOS