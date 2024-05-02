#include <iostream>
#include <array>
#include <random>
#include <ctime>
#include <algorithm>

using namespace std;

bool esSeguro(const array<int, 8>& tablero, int fila, int columna) {
    for (int i = 0; i < fila; ++i) {
        if (tablero[i] == columna || 
            tablero[i] - i == columna - fila || 
            tablero[i] + i == columna + fila) {
            return false;
        }
    }
    return true;
}

void resolverReinasFuerzaBrutaAleatorizada(array<int, 8>& tablero) {
    // Inicializar generador de números aleatorios
    default_random_engine generator(time(NULL));
    
    for (int fila = 0; fila < 8; ++fila) {
        // Generar una permutación aleatoria de las columnas
        array<int, 8> columnas;
        for (int i = 0; i < 8; ++i) {
            columnas[i] = i;
        }
        shuffle(columnas.begin(), columnas.end(), generator);
        
        // Iterar sobre las columnas en orden aleatorio
        for (int i = 0; i < 8; ++i) {
            int columna = columnas[i];
            if (esSeguro(tablero, fila, columna)) {
                tablero[fila] = columna;
                break;
            }
        }
    }
}

int main() {
    array<int, 8> tablero = {0};
    resolverReinasFuerzaBrutaAleatorizada(tablero);

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

    return 0;
}