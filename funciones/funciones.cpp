#include "funciones.hpp"
#include <iostream>

using namespace std;
//funciones

void suma(int num1, int num2) {
    int rSuma = num1 + num2;
    cout << "La suma es: " << rSuma << endl;
   
}
float multiplica(float n1, float n2) {
    float resultado = n1 * n2;
    return resultado ;
}
void imprimir(){
    int arrait[2][2]={
    {1,2},
    {3,4}
    };

  //cout << arrait[0][1]*arrait[1][0] << endl;
    for(int i=0; i<=1; i++){
        for(int j=0; j<=1; j++){
         cout << "el arrait en la pos ["<< i << "][" <<j << "] ="<< arrait[i][j] << endl;
        }
    }
}
