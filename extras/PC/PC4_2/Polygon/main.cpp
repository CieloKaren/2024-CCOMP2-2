#include "Rectangle.h"
#include "Triangle.h"
#include <vector>

// Función para recorrer el vector de punteros a Polygon e imprimir el área de cada objeto
void printAreas(const std::vector<Polygon*>& polygons) {
    for (auto polygon : polygons) {
        polygon->printArea(); // Llama al método printArea() de la clase base Polygon
        std::cout << std::endl;
    }
}

int main() {
    // Crear un vector de punteros de tipo Polygon
    std::vector<Polygon*> polygons;

    // Agregar objetos Rectangle y Triangle al vector
    polygons.push_back(new Rectangle(4, 5));
    polygons.push_back(new Triangle(3, 6));

    // Llamar a la función para imprimir las áreas de todos los polígonos
    printAreas(polygons);

    // Liberar la memoria
    for (auto polygon : polygons) {
        delete polygon;
    }

    return 0;
}
