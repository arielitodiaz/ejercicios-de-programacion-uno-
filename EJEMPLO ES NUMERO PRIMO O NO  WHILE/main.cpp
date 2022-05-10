#include <iostream>

using namespace std;

int main()
{ int aux=1,c=0,n;

    cout << "HOLA  , INGRESE UN NUMERO POR FAVOR" << endl;
    cin >>n;
    while(aux<=n){
        if(n%aux==0){
            c++;
        }
        }
        if(c==2){
        cout << "es primo" <<endl;
    }
    else{
        cout << "no es primo" <<endl;

    }

    return 0;
}
