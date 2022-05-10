#include <iostream>
//PROGRAMA QUE TE DICE EL VALOR MAXIMO  DE LOS VALORES
//INGRESADOS POR EL USUARIO.
using namespace std;

int main()
{int n,  maximo=0;
    cout << "BIENVENIDO ingrese valores:" << endl;
    cin >> n;
    while(n!=0){
        if(n>maximo){
            maximo=n;
        }
        cin >> n;
    }
     cout << "el valor maximo es : " << maximo <<endl;
    return 0;
}
