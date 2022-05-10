#include <iostream>

using namespace std;

int main()
{ int maximo, n, maximoII;
  bool b;
    cout << "INGRESE NUMERO..." << endl;
    for (int x=0; x<5; x++){
        cin >> n;
        if (n>maximo){
            maximoII=maximo;
            maximo=n;
        }
        else{
            if(!b){
                maximoII=n;
                b=1;
            }
        else{
            if(n>maximoII){
                maximoII=n;
            }
        }
        }
    }
    cout <<"el primer maximo es:" << maximo <<endl;
    cout <<"el segundo maximo es: " <<maximoII <<endl;


    return 0;
}
