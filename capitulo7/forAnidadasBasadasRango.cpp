#include <iostream>
using namespace std;

int main() {
    //for externa controla el flujo de las filas o niveles superiores 
    //de una estructura de datos.
    for (int fila = 1; fila <= 3; fila++) { 
        //for interna se utiliza para recorrer los elementos dentro 
        //de cada fila o nivel, avanzando o retrocediendo según sea necesario.
        for (int columna = 1; columna <= 2; columna++) {
            cout << "Fila: " << fila << ", Columna: " << columna << endl;
        }
    }

    return 0;
}

