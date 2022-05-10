#include <iostream>
//PROGRAMA QUE TE DICE EL MAXIMO DE LOS VALORES INGRESADOS Y LA POSICION EN LA QUE
//ESTA INGRESADO EL NUMERO.
using namespace std;

int main()
{ int n, maximo, posmax, pos=1;
  bool band=0;

    cout << "BIENVENIDO... ingrese valores:" << endl;
    cin >> n;
    while(n!=0){
        if(band==0){
                maximo=n;
                posmax=pos;
                band=1;
    }
    else{
            if(n>maximo){
                maximo=n;
                posmax=pos;
            }
            else{
                if(n<maximo){
                    posmax=pos;
                }
            }
    }
    posmax++;
    cin >> n;

    }
    cout << "el valor maximo es:" << maximo << endl;
    cout << "y su posicion es  :" << pos << endl;

    return 0;
}
