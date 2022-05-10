#include <iostream>

using namespace std;

int main()
{ int x, n1, n2, mayor, menor;
    cout << "ingrese dos numeros..." << endl;
    cin >> n1;
    cin >> n2;

    if(n1>n2){
        mayor=n1;
        menor=n2;
    }
    else {
        mayor=n2;
        menor=n1;
    }
    cout << "los numeros que hay entre el menor y el mayor son ..."<<endl;
    for (x=menor; x<=mayor; x++){
        cout << x << endl;
    }
    return 0;
}
