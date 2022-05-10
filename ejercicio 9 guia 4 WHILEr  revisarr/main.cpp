#include <iostream>

using namespace std;

int main()
{ int n, maximo, minimo;
    cout << "bienvendio" << endl;
    cout << "ingrese valor: "<<endl;
        cin >> n;
    while (n!=0){
        if(n>maximo){
            maximo=n;
        }
        else{
            if(n<minimo){
                minimo=n;
                }
            }
    cin >> n;
    }
    cout << "el numero maximo es: " << maximo <<endl;
    cout << "el numero minimo es: " << minimo <<endl;
    return 0;
}
