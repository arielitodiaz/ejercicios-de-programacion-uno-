#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "ingrese el primer numero" << endl;
    cin >> a;
    cout << "ingrese el segundo numero" << endl;
    cin >> b;
    cout << "ingrese el tercer numero" << endl;
    cin >> c;
    if (a!=b){
        if (b!=c){
            if (a!=c){
                cout << "los numeros son distintos entre si" << endl;
            }
        }
    }
    return 0;
}
