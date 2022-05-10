#include <iostream>

using namespace std;

int main()
{ int i, x, n, contadorprim=0, totalprim=0;
    cout << "ingrese valor" <<endl;
    cin >> n;
    for(i=1;i<=10;i++){
        for(x=1;x<=n;x++){
            if(n%x==0){
                contadorprim++;
            }
        }
        if( contadorprim==2){
            totalprim++;
        }
    }
    cout << "los numeros primos son : " << totalprim <<endl;
    return 0;
}
