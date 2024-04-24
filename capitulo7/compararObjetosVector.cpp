#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Crear dos vectores
    vector<int> enteros1 = {1, 2, 3};
    vector<int> enteros2 = {4, 5, 6};

    // Asignar enteros2 a enteros1
    enteros1 = enteros2;

    // Verificar si los vectores son iguales
    bool sonIguales = (enteros1 == enteros2);

    // Imprimir el resultado
    cout << "¿Son iguales los vectores? " << (sonIguales ? "Sí" : "No") << endl;

    return 0;
}
