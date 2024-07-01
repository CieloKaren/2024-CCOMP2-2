#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>

class Polygon {
protected:
    int width, height;

public:
    Polygon(int a, int b) : width(a), height(b) {}

    virtual ~Polygon() {} // Hacer el destructor virtual para la clase base

    // Método virtual puro para hacer la clase abstracta
    virtual int area() const = 0;

    void printArea() const {
        std::cout << "Area: " << this->area() << '\n';
    }
};

#endif // POLYGON_H
