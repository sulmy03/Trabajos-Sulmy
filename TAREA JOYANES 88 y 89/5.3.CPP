#include<iostream>
#define max 10
using namespace std;

int main(){
    int np = 0, nn = 0, nulos = 0, dato;
    for (int i = 1;i<=max; i++)
    {
        cin>>dato;
        if(dato>0)np++;
        else if(dato<0)nn++;
        else nulos++;
    }
    cout<<"POSITIVOS NEGATIVOS NULOS"<<endl;
    cout<<np<<""<<nn<<""<<nulos;
    return 0;
}
