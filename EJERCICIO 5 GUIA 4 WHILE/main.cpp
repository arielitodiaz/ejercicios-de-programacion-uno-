#include <iostream>

using namespace std;

int main()
{ int a, b, maximo, minimo, con;
    cout << "BIENVENIDO" << endl;
    cout << "ingrese valores:" <<endl;
    cin >> a;
    cin >> b;
    cout << endl;
    if (a>b){
        maximo=a;
        minimo=b;
    }
    else{
        maximo=b;
        minimo=a;
    }
    while(minimo<maximo){
    minimo++;
    con=minimo;
    con=con-1;


        cout << con <<endl;
    }

    return 0;
}
