#include "Persona.h"
#include <iostream>

int main() {
    // Crear un arreglo dinámico de 10 elementos de la clase Persona
    Persona* personas = new Persona[10] {
        Persona("Juan", 30),
        Persona("Ana", 25),
        Persona("Luis", 28),
        Persona("Marta", 32),
        Persona("Pedro", 22),
        Persona("Lucia", 27),
        Persona("Jorge", 29),
        Persona("Sofia", 24),
        Persona("Carlos", 35),
        Persona("Laura", 26)
    };


    // Iterar sobre el arreglo e imprimir los detalles de cada persona
    for (int i = 0; i < 10; ++i) {
        personas[i].print();
    }

    // Liberar la memoria asignada dinámicamente
    delete[] personas;

    return 0;
}
