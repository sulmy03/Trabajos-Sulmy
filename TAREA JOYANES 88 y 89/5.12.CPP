#include <iostream>
using namespace std;

int main(){
    int i,n;
    float suma,maximo;

 do
{
    cout << "VALOR MAXIMO POSITIVO";
    cin >> maximo;
} 
while (maximo <= 0);
for ( suma =0, i = 0; suma <= maximo;)
{
    i++ ;
    suma = suma + i * i - i- 2;
}
n = i;
cout << " VALOR DE SUMA= " << suma << endl;
cout <<" NUMERO DE TERMINOS = " << n << endl;

return 0;
}