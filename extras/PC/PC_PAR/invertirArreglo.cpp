#include <iostream>
#include <vector>
 
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void invertirIterativo(std::vector<int>& arreglo) {
    int inicio = 0;
    int fin = arreglo.size() - 1;

    while (inicio < fin) {
        swap(arreglo[inicio], arreglo[fin]);
        inicio++;
        fin--;
    }
}

void invertirRecursivo(std::vector<int>& arreglo, int inicio, int fin) {
    if (inicio < fin) {
        swap(arreglo[inicio], arreglo[fin]);
        invertirRecursivo(arreglo, inicio + 1, fin - 1);
    }
}

int main() {
    std::vector<int> arreglo = {1, 2, 3, 4, 5};

    std::cout << "Arreglo original:" << std::endl;
    for (int num : arreglo) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    invertirIterativo(arreglo);

    std::cout << "Arreglo invertido iterativamente:" << std::endl;
    for (int num : arreglo) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    invertirRecursivo(arreglo, 0, arreglo.size() - 1);

    std::cout << "Arreglo invertido recursivamente:" << std::endl;
    for (int num : arreglo) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
