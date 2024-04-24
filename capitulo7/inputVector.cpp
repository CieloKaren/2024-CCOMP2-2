#include <iostream>
#include <vector>

// Función para leer valores en un vector
void inputVector(std::vector<int>& vec) {
    std::cout << "Ingrese los valores del vector (ingrese '0' para terminar):\n";

    int valor;
    while (true) {
        std::cin >> valor;
        if (valor == 0) {
            break;  // Termina la lectura cuando se ingresa '0'
        }
        vec.push_back(valor);  // Agrega el valor al final del vector
    }}

int main() {
    std::vector<int> miVector;
    // Llama a la función para leer los valores en el vector
    inputVector(miVector); //creamos un vector "inputvector"
    // Imprime los valores del vector
    std::cout << "Los valores del vector son: ";
    for (int valor : miVector) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    return 0;
}
