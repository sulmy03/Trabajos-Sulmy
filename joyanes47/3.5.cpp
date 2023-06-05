#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
 
 float m, energia;

 const float c = 2.997925e+10;
 cout << " INTRODUZCA MASA\n ";
 cin >> m;
 energia = c * m * m * m;
 cout << " ENERGIA EN ERGIOS : " << energia;

return 0;
}
