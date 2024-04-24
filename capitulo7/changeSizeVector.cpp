#include <iostream>
#include <vector>

int main() {
    std::vector<int> enteros3 = {1, 2, 3};

    // Mostrar el tamaño actual del vector
    std::cout << "Tamaño actual de enteros3: " << enteros3.size() << std::endl;

    // Agregar un nuevo elemento al final del vector
    enteros3.push_back(1000);

    // Mostrar el nuevo tamaño del vector
    std::cout << "Nuevo tamaño de enteros3: " << enteros3.size() << std::endl;

    // Mostrar el contenido actualizado del vector
    std::cout << "Contenido actualizado de enteros3: ";
    for (int elem : enteros3) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
