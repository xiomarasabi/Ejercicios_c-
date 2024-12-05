#include "funciones.hpp"
#include <iostream>

using namespace std;
//funciones

int suma(int num) {
  int suma = 0;
    for(int i=1; i<=num; i++){
      suma += i;
    }
    return suma;
}


