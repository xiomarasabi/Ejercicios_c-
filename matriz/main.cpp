#include <iostream>
#include "funciones.hpp"
using namespace std;

int main() {
    int n;
    cout << "grandor de la matriz (n): ";
    cin >> n;

    int matriz[100][100];

    cout << "valores de la matriz: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Pos[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }


    espejo(matriz, n);

    cout << "Matriz espejo: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
