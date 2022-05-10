#include <iostream>

using namespace std;

int main()
{ int p=1, n, band=0, minI=n, minII=minI, posuno=p, posdos=posuno ;
    cout << "BIENVENIDO" << endl;
    cout << " ingrese  valor " <<endl;
    cin>> n;
    while(n!=0){
        if(n<minI){
            minI=n;
            minII=minI;
            posdos=posuno;
            band=1;
        }
        else{
            if(!band){
                minII=n;
                band=1;
                posdos=p;
            }
            else{
                if(n<minII){
                    minII=n;
                    posdos=p;
                }
            }
        }
        cout << "ingrese valor"<<endl;
        cin>>n;
        p++;
    }

    cout << "el menor es :" << minII <<endl;
    cout << "en la posicion :" << posuno << endl;
    cout << "el segundo menor es:" << minI <<endl;
    cout << "en la posicion :" << posdos << endl;


    return 0;
}
