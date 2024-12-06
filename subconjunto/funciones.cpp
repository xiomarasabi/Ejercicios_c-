#include "funciones.hpp"
#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

void subconjunto(const vector<int>& conjunto, vector<int>& subconjuntoActual, int indice, vector<vector<int>>& resul) {
    if (indice == conjunto.size()) {
        resul.push_back(subconjuntoActual);
        return;
    }

    subconjunto(conjunto, subconjuntoActual, indice + 1, resul);

    subconjuntoActual.push_back(conjunto[indice]);
    subconjunto(conjunto, subconjuntoActual, indice + 1, resul);

    subconjuntoActual.pop_back();
}

void impriSubconjuntos(const vector<vector<int>>& subconjuntos) {
    for (const auto& subconjunto : subconjuntos) {
        cout << "{ ";
        for (int objeto  : subconjunto) {
            cout << objeto << " ";
        }
        cout << "}" << endl;
    }
}

