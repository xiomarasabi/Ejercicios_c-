#include <iostream>

#include "funciones.hpp"

using namespace std;

int main() {
    int n;
    int laberinto[10][10], solucion[10][10] = {0};

    cout << "tamano  que deseas del laberinto (max 10): ";
    cin >> n;

    if (n > 10 || n <= 0) {
        cout << "Tamano muy alto" << endl;
        return 1;
    }

    cout << "Ingrese el laberinto :" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> laberinto[i][j];
        }
    }

    cout << "mostrar laberinto inicial:" << endl;
    imprimir(laberinto, n);

    if (resuelto(laberinto, solucion, 0, 0, n)) {
        cout << "resusltafo encontrado:" << endl;
        imprimir(solucion, n);
    } else {
        cout << "no se encuentra una solucion para el laberinto, intentelo de nuevo" << endl;
    }

    return 0;
}
