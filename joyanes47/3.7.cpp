#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
int hectometros, decametros, metros, decimetros;
cout << " INTRODUZCA HECTOMETROS, DECAMETROS Y METROS:";
cin >> hectometros >> decametros >> metros;
decimetros = ((hectometros * 10 + decametros) * 10 + metros) * 10;
cout << " NUMERO DE DECIMETRO ES: "<< decimetros << endl;
return 0;
}

