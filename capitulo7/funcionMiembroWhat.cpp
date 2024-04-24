#include <iostream>
#include <stdexcept>

int main() {
    try {
        // Intentamos acceder a un elemento fuera de los límites de un vector
        std::vector<int> vec = {1, 2, 3};
        int valor = vec.at(5); // Esto generará una excepción out_of_range
    } catch (const std::out_of_range& ex) {
        // Capturamos la excepción y mostramos el mensaje de error
        std::cout << "Error: " << ex.what() << std::endl;
    }

    return 0;
}
