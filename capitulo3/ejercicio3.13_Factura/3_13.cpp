#include <iostream>
#include <string>
#include "3_13Factura.h"
int main() {
    // Crear un objeto de tipo Factura
    Factura factura1("001", "Martillo", 5, 100);

    // Imprimir información de la factura
    std::cout << "Número de pieza: " << factura1.obtenerNumeroPieza() << std::endl;
    std::cout << "Descripción: " << factura1.obtenerDescripcion() << std::endl;
    std::cout << "Cantidad de artículos: " << factura1.obtenerCantidadArticulos() << std::endl;
    std::cout << "Precio por artículo: " << factura1.obtenerPrecioPorArticulo() << std::endl;
    std::cout << "Monto de la factura: " << factura1.obtenerMontoFactura() << std::endl;

    return 0;
}
