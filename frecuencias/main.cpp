#include <iostream>
#include "funciones.hpp"
using namespace std;

int main() {
    string cadena;

    
    cout << "ingrese una cadena de texto: ";
    getline(cin, cadena);

    map<char, int> frecuencias = contarFrecuencia(cadena);
    cout << "la frecuencia de caracteres:" << endl;
    for (const auto& par : frecuencias) {
        cout << "'" << par.first << "' muestra " << par.second << " cantidad de veces" <<endl;
    }

    
    char masRepetido = caracterMasRepetido(cadena);
    cout << "el mas repetido es: '" << masRepetido << "'" <<endl;

    return 0;
}
