#include <iostream>
#include "funciones.hpp"
using namespace std;

int main() {
    int inicio, fin;

    cout << "Ingres el inicio que desea: ";
    cin >> inicio;
    cout << "Ingrese el fin que desea: ";
    cin >> fin;

    if (inicio > 0 && fin > 0 && inicio <= fin) {
        
        largaCollatz(inicio, fin);
    } else {
        cout << "el inicio debe ser menor o igual al fin" << endl;
    }

    return 0;
}
