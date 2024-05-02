#include <iostream>

using namespace std;

bool esSeguro(int tablero[8][8], int fila, int columna) {
    // Verificar si hay una reina en la misma columna
    for (int i = 0; i < fila; ++i) {
        if (tablero[i][columna] == 1) {
            return false;
        }
    }
    // Verificar si hay una reina en la misma diagonal superior izquierda
    for (int i = fila, j = columna; i >= 0 && j >= 0; --i, --j) {
        if (tablero[i][j] == 1) {
            return false;
        }
    }
    // Verificar si hay una reina en la misma diagonal superior derecha
    for (int i = fila, j = columna; i >= 0 && j < 8; --i, ++j) {
        if (tablero[i][j] == 1) {
            return false;
        }
    }
    return true;
}

void generarCombinaciones(int fila, int tablero[8][8], int& soluciones) {
    if (fila == 8) {
        ++soluciones;
        // Imprimir la solución encontrada
        cout << "Solucion " << soluciones << ":\n";
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                cout << tablero[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    // Probar todas las columnas para esta fila
    for (int columna = 0; columna < 8; ++columna) {
        if (esSeguro(tablero, fila, columna)) {
            // Colocar una reina en esta posición
            tablero[fila][columna] = 1;
            // Probar la siguiente fila
            generarCombinaciones(fila + 1, tablero, soluciones);
            // Quitar la reina de esta posición para probar la siguiente columna
            tablero[fila][columna] = 0;
        }
    }
}

int main() {
    int tablero[8][8] = {0};
    int soluciones = 0;

    generarCombinaciones(0, tablero, soluciones);

    cout << "Total de soluciones encontradas: " << soluciones << endl;

    return 0;
}