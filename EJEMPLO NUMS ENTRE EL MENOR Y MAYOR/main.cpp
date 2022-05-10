#include <iostream>

using namespace std;

int main()
{int a, b, maximo, minimo;
    cout << "BIENVENIDO ingrese dos numeros por favor..." << endl;
    cin >> a;
    cin >> b;
     if (a>b){
        maximo=a;
        minimo=b;
     }
     else{
        maximo=b;
        minimo=a;
     }
    while(minimo<=maximo){
        cout << minimo << endl;
        minimo++;
    }

    return 0;
}
