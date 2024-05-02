#include <iostream>
#include <array>

using namespace std;

bool esSeguro(const array<int, 8>& tablero, int fila, int columna) {
    // Verifica si hay una reina en la misma columna
    for (int i = 0; i < fila; ++i) {
        if (tablero[i] == columna) {
            return false;
        }
        // Verifica si hay una reina en la misma diagonal
        if (tablero[i] - i == columna - fila || tablero[i] + i == columna + fila) {
            return false;
        }
    }
    return true;
}

bool resolverReinasRecursivo(array<int, 8>& tablero, int fila = 0) {
    // Caso base: si todas las reinas están colocadas, hemos encontrado una solución
    if (fila == 8) {
        return true;
    }

    // Intentar colocar una reina en cada columna de esta fila
    for (int columna = 0; columna < 8; ++columna) {
        // Verificar si es seguro colocar una reina en esta posición
        if (esSeguro(tablero, fila, columna)) {
            // Colocar la reina en esta posición
            tablero[fila] = columna;
            // Intentar colocar la siguiente reina recursivamente
            if (resolverReinasRecursivo(tablero, fila + 1)) {
                return true; // Si se encontró una solución, salir
            }
            // Si no se pudo colocar la siguiente reina desde esta posición, deshacer y probar la siguiente columna
        }
    }

    // Si no se pudo colocar ninguna reina en esta fila, regresar false
    return false;
}

int main() {
    array<int, 8> tablero = {0};

    // Llamar a la función recursiva para resolver el problema
    if (resolverReinasRecursivo(tablero)) {
        // Imprimir el tablero con las posiciones de las reinas
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (tablero[i] == j) {
                    cout << "1 ";
                } else {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    } else {
        cout << "No se encontró ninguna solución." << endl;
    }

    return 0;
}