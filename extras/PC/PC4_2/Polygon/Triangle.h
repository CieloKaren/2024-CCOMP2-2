#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Polygon.h"

class Triangle : public Polygon {
public:
    Triangle(int a, int b) : Polygon(a, b) {}

    // Implementación del método virtual 'area' para Triángulo
    int area() const override {
        return width * height / 2;
    }
};

#endif // TRIANGLE_H
