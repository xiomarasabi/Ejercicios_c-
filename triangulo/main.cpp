#include <iostream>
#include "funciones.hpp"
using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero de filas para el triangulo de Pascal que desea: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "numero debe de ser mayor a 0" << endl;
    } else {
        trianguloPascal(n);
    }

    return 0;
}
