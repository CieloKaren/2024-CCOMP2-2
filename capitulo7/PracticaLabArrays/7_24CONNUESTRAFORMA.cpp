#include <iostream>
#include <array>

using namespace std;

void imprimirTablero(const array<int, 8>& tablero) {
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
}

int main() {
    array<int, 8> tablero = {3, 6, 2, 7, 1, 4, 0, 5};

    cout << "SOLUCION QUE HICIMOS A MANO T-T " << endl;
    imprimirTablero(tablero);

    return 0;
}