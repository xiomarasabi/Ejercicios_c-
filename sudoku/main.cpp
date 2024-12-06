#include <iostream>
#include "funciones.hpp"

using namespace std;

int main() {
    int tablero[9][9];

    cout << "Ingrses el tablero de Sudoku, el 0 seran casillas vacias:" << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> tablero[i][j];
            if (tablero[i][j] < 0 || tablero[i][j] > 9) {
                cout << "error no se puede ingresar un numero mayor a 9" << endl;
                return 1;
            }
        }
    }

    if (validarSudoku(tablero)) {
        cout << "Sudoku es valido" << endl;
    } else {
        cout << "Sudoku no es valido" << endl;
    }

    return 0;
}
