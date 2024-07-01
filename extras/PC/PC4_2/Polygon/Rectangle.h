#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygon.h"

class Rectangle : public Polygon {
public:
    Rectangle(int a, int b) : Polygon(a, b) {}

    // Implementación del método virtual 'area' para Rectángulo
    int area() const override {
        return width * height;
    }
};

#endif // RECTANGLE_H
