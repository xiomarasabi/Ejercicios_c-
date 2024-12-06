#include "funciones.hpp"
using namespace std;

    map<char, int> contarFrecuencia(const string& cadena) {
    map<char, int> frecuencia;

    for (char c : cadena) {
        frecuencia[c]++;  
    }

    return frecuencia;
}

char caracterMasRepetido(const string& cadena) {
    map<char, int> frecuencia = contarFrecuencia(cadena);

    char masRepetido = '\0';
    int maxFrecuencia = 0;

    for (const auto& par : frecuencia) {
        if (par.second > maxFrecuencia) {
            masRepetido = par.first;
            maxFrecuencia = par.second;
        }
    }

    return masRepetido;
}
