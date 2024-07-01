#include "Persona.h"
#include <iostream>

std::string Persona::getNombre() const {
    return nombre;
}

void Persona::setNombre(std::string n) {
    nombre = n;
}

int Persona::getEdad() const {
    return edad;
}

void Persona::setEdad(int e) {
    edad = e;
}

void Persona::print() const {
    std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
}
