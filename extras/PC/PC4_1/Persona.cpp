#include <iostream>
#include <string>
#include <algorithm>
#include "persona.h"
using namespace std;

// Funcion para imprimir los elementos del arreglo de Personas
void printArreglo(Persona* arreglo, int tamanio) {
    for (int i = 0; i < tamanio; ++i) {
        cout << "Nombre: " << arreglo[i].getNombre() << ",edad: " << arreglo[i].getEdad() << endl;
    }
}

// Funcion que ordena los elementos del arreglo tomando como criterio la edad
bool comparaEdad(const Persona& a, const Persona& b) {
    return a.getEdad() < b.getEdad(); // Orden ascendente por edad
}

// Funcion de comparacion
bool comparaNombre(const Persona& a, const Persona& b) {
    return a.getNombre() < b.getNombre(); // Orden ascendente por nombre
}

int main(){
    // arreglo dinamico
    Persona* personas = new Persona[10]{
        Persona("Ana", 10),
        Persona("Eva", 15),
        Persona("Estela", 19),
        Persona("Rosa", 21),
        Persona("Juan", 15),
        Persona("Marci", 17),
        Persona("Mateo", 19),
        Persona("Ales", 18),
        Persona("Marcus", 10),
        Persona("Daya", 19),

    };

    Persona* ptr = personas + 9; // apunta al ultimo elemento del arreglo

    // Imprime los elementos del arreglo usando el puntero desde le ultimo hasta el primer elemento
    /*for(int i = 0; i < 10; ++i){
        cout << "Nombre: " << ptr->getNombre() << ",edad: " << ptr->getEdad() << endl;
        ptr--; // Mueve el puntero al elemento anterior
    }*/

    for (int i = 9; i >= 0; --i) {
        if (i % 2 != 0) { // verifica si el índice es impar
            cout << "Nombre: " << ptr->getNombre() << ",edad: " << ptr->getEdad() << "\n" << endl;
        }
        ptr--; // Mueve el puntero al elemento anterior
    }

     // Imprime los elementos del arreglo usando la funcion
    printArreglo(personas, 10);


    // Ordena el arreglo por edad usando sort y la funcion de comparacion
    sort(personas, personas + 10, comparaEdad);

    // Imprime los elementos del arreglo ordenados por edad
    cout << "\n" << "Arreglo ordenado por edad" << endl;
    printArreglo(personas, 10);

    // Ordena el arreglo por nombre usando sort y la función de comparacion
    sort(personas, personas + 10, comparaNombre);

    // Imprime los elementos del arreglo ordenados por nombre
    cout << "\n" << "Arreglo ordenado por nombre:" << endl;
    printArreglo(personas, 10);
        
    delete [] personas;
    return 0;
}
