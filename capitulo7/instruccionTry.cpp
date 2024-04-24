#include <iostream>

int main() {
    try {
        // Intentamos realizar una operación que puede lanzar una excepción
        int divisor = 0;
        int resultado = 10 / divisor; // Esto lanzará una excepción 
                                        //de división por cero
        std::cout << "Resultado: " << resultado << std::endl; // Esta línea 
                                                        //nunca se ejecutará
    } catch (const std::exception& e) {
        // Capturamos y manejamos la excepción si ocurre
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}