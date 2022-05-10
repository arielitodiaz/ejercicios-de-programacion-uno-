#include <iostream>

using namespace std;

int main(){
int a, b, c, d, e, maximo;
    cout << "ingrese el primer numero:" <<endl;
    cin >> a;
    maximo=a;
    cout << "ingrese el segundo numero:" <<endl;
    cin >> b;
    cout << "ingrese el tercer numero:" <<endl;
    cin >> c;
    cout << "ingrese el cuarto numero:" <<endl;
    cin >> d;
    cout <<  "ingrese el  quinto numero:" <<endl;
    cin >> e;
    if(b>maximo)
    {
        maximo=b;
    }
    if (c>maximo)
    {
        maximo=c;
    }
    if (d>maximo)
    {
        maximo=d;
    }
    if (e>maximo)
    {
        maximo=e;
    }
    cout << "el numero maximo es:" << maximo <<endl;

    return 0;
}
