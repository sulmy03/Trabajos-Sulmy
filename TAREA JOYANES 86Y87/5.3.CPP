#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int i = 1 , n ;
    cin >> n;
    while (i <= n)
    if ((i % n) == 0)
           ++i;
        
    cout << i << endl;
    system("PAUSE");
    return 0;
}
//a) ¿Cuál es la salida si se introduce como valor de n, 0? NO HAY SALIDA
//b) ¿Cuál es la salida si se introduce como valor de n, 1? LA SALIDA SERA 2
//c) ¿Cuál es la salida si se introduce como valor de n, 3? LA SALIDA SERA 4