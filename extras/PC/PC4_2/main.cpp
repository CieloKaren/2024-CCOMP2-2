#include "Array.h"
#include <iostream>

int main() {
    // Crear dos arrays de tamaño 5
    Array array1(5);
    Array array2(5);

    // Leer datos para array1 desde la entrada estándar usando la sobrecarga de operador >>
    std::cout << "Ingrese " << array1.getSize() << " enteros separados por espacio para array1:" << std::endl;
    std::cin >> array1;

    // Leer datos para array2 desde la entrada estándar usando la sobrecarga de operador >>
    std::cout << "Ingrese " << array2.getSize() << " enteros separados por espacio para array2:" << std::endl;
    std::cin >> array2;

    // Imprimir los arrays usando la sobrecarga de operador <<
    std::cout << "Array1: " << array1 << std::endl;
    std::cout << "Array2: " << array2 << std::endl;

    // Ejemplo de uso de operadores de comparación
    if (array1 == array2) {
        std::cout << "Array1 es igual a Array2." << std::endl;
    } else {
        std::cout << "Array1 no es igual a Array2." << std::endl;
    }

    if (array1 != array2) {
        std::cout << "Array1 no es igual a Array2." << std::endl;
    } else {
        std::cout << "Array1 es igual a Array2." << std::endl;
    }

    // Destruir los objetos al final del alcance
    return 0;
}
