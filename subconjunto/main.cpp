#include <iostream>
#include "funciones.hpp"
#include <vector>


using namespace std;

int main() {
    int n;
    vector<int> conjunto;

    cout << "tamano deseado del conjunto: ";
    cin >> n;

    if (n <= 0) {
        cout << "Debe ser mayor que 0" << endl;
        return 1;
    }

    cout << "objetos del conjunto: " << endl;
    for (int i = 0; i < n; i++) {
        int objeto;
        cin >> objeto;
        conjunto.push_back(objeto);
    }

    vector<int> subconjuntoActual;
    vector<vector<int>> subconjuntos;

    subconjunto(conjunto, subconjuntoActual, 0, subconjuntos);

    cout << "los subconjuntos son:" << endl;
    impriSubconjuntos(subconjuntos);

    return 0;
}

