#include <iostream>
#include "funciones.hpp"
using namespace std;

int longitudCollatz(int n) {
    int longitud = 1; 

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2; 
        } else {
            n = 3 * n + 1;  
        }
        longitud++;  
    }
    return longitud;
}

void largaCollatz(int inicio, int fin) {
    int numeroMaximo = inicio;
    int longitudMaxima = longitudCollatz(inicio);

    for (int i = inicio + 1; i <= fin; i++) {
        int longitudActual = longitudCollatz(i);
        if (longitudActual > longitudMaxima) {
            longitudMaxima = longitudActual;
            numeroMaximo = i;
        }
    }

    cout << "la secuencia mas larga es de: " << numeroMaximo <<endl;
    cout << " longitud de la secuencia: " << longitudMaxima <<endl;
}
