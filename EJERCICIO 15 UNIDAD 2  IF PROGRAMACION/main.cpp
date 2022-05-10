#include <iostream>

using namespace std;

int anio;
main(){
    cout << "ingrese el anio";
    cin >> anio;
    if(anio%4==0){
        if(anio%100==0){
             if(anio%400==0){
                cout << "el anio" << anio << "es bisiesto";
            }
            else{
                cout << "el anio" << anio << "no es bisiesto";
            }
        }
        else{
            cout << "el año" << anio << "es bisiesto";
        }
    }
    else{
        cout << "el anio" << anio << "no es bisiesto";

    }


return 0;
}
