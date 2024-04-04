#include <iostream>
#include <string>

class Factura{
    private:
        std::string numeroPieza;
        std::string descripcion;
        int cantidadArticulos;
        int precioPorArticulo;
    public:
        Factura(std::string numPieza, std::string desc, int cantArt, int precio) {
        numeroPieza = numPieza;
        descripcion = desc;
        cantidadArticulos = (cantArt > 0) ? cantArt : 0;
        precioPorArticulo = (precio > 0) ? precio : 0;
    }

    // Funciones setter
    void establecerNumeroPieza(std::string numPieza) {
        numeroPieza = numPieza;
    }

    void establecerDescripcion(std::string desc) {
        descripcion = desc;
    }

    void establecerCantidadArticulos(int cantArt) {
        cantidadArticulos = (cantArt > 0) ? cantArt : 0;
    }

    void establecerPrecioPorArticulo(int precio) {
        precioPorArticulo = (precio > 0) ? precio : 0;
    }

    // Funciones getter
    std::string obtenerNumeroPieza() const {
        return numeroPieza;
    }

    std::string obtenerDescripcion() const {
        return descripcion;
    }

    int obtenerCantidadArticulos() const {
        return cantidadArticulos;
    }

    int obtenerPrecioPorArticulo() const {
        return precioPorArticulo;
    }

    // Función para obtener el monto de la factura
    int obtenerMontoFactura() const {
        return cantidadArticulos * precioPorArticulo;
    }
            
};