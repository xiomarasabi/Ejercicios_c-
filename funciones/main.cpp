
#include <iostream>
#include "funciones.hpp"
using namespace std;

//cuerpo
int main(int argc, const char * argv[]) {

  imprimir();

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


  //  usando funcion void sin retorno
    suma(5, 3);
    
    
// funcion con retorno
    float resulMultiplica =0.0;
    resulMultiplica = multiplica(5.0, 3.0);
    cout << "La multiplicacion es: " << resulMultiplica << endl;
    
    return 0;
}

