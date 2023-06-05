#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int quinientos, doscientos, cien, cincuenta, veinte, diez;
int cinco, dos, uno, cincuentac, veintec, diezc, cincoc, dosc, unc;
float CantidadOriginal;
long int cantidad;
cout << "INTRODUCIR CANTIDAD EN EUROS";
cin >> CantidadOriginal;

CantidadOriginal*=100; // se pasa de euros con decimales a centimos

cantidad = (int) CantidadOriginal; // se trunca a centimos de euro
quinientos = cantidad / 50000; cantidad = cantidad % 50000;
doscientos = cantidad / 20000; cantidad = cantidad % 20000;
cien = cantidad / 10000; cantidad = cantidad % 10000;
cincuenta = cantidad / 5000; cantidad = cantidad % 5000;
veinte = cantidad / 2000; cantidad = cantidad % 2000;
diez = cantidad / 1000; cantidad = cantidad % 1000;
cinco = cantidad / 500; cantidad = cantidad % 500;
dos = cantidad / 200; cantidad = cantidad % 200;
uno = cantidad / 100; cantidad =cantidad % 100;
cincuentac = cantidad / 50; cantidad = cantidad % 50;
veintec = cantidad / 20; cantidad = cantidad % 20;
diezc = cantidad / 10; cantidad = cantidad % 10;
cincoc = cantidad / 5; cantidad = cantidad % 5;
dosc = cantidad / 2; cantidad = cantidad % 2;
unc = cantidad;
cout << " CAMBIO EN MONEDA CON EL MENOR NUMERO " << endl;
cout << " CANTIDAD ORIGINAL MEN CENTIMO: "<< CantidadOriginal << endl;
cout << " BILLETES DE QUNIENTOS EUROS: " << quinientos << endl;
cout << " BILLETES DE DOCIENTOS EUROS: "<< doscientos << endl;
cout << " BILLETES DE CIEN EUROS: " << cien << endl;
cout << " BILLETES DE CINCUENTA EUROS: " << cincuenta << endl;
cout << " BILLETES DE VEINTE EUROS: "<< veinte << endl;
cout << " BILLETES DE DIEZ EUROS : " << diez << endl;
cout << " BILLETES DE CINCO EUROS: " << cinco << endl;
cout << " MONEDA DE DOS EUROS: "<< dos << endl;
cout << " MONEDA DE UN EURO: " << uno << endl;
cout << " MONEDA DE CINCUENTA CENTIMOS DE EUROS : "<<cincuentac<<endl;
cout << " MONEDA DE VEINTE CENTIMOS DE EURO: "<< veintec << endl;
cout << " MONEDA DE DIEZ CENTIMOS DE EURO: " << diezc << endl;
cout << " MONEDA DE CINCO CENTIMOS DE EURO: " << cincoc << endl;
cout << " MONEDA DE DOS CENTIMOS DE EURO: "<< dosc << endl;
cout << " MONEDA DE UN CENTIMO DE EURO: " << unc << endl;

return 0;
}













