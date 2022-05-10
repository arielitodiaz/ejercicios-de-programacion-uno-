#include <iostream>

using namespace std;

int main()
{ int n, neg=0,pos=0;
    cout << "HOLA.... ingrese valores: " << endl;
    cin >> n;
    while(n!=0){
        if(n>0){
            pos++;
        }
        else{
            if(n<0){
                neg++;
            }
        }
        cin >> n;
    }
    cout << "los negativos son : " <<neg << endl;
    cout << "los positivos son : " <<pos << endl;

    return 0;
}
