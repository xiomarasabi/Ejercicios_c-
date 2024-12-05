#include "funciones.hpp"
#include <iostream>
#include <algorithm> 

using namespace std;

void espejo(int matriz[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            std::swap(matriz[i][j], matriz[i][n - j - 1]); // Reflejar valores
        }
    }
}
