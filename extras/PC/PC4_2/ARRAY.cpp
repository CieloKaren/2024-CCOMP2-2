#include "Array.h"
#include <iostream>
#include <stdexcept>

// Constructor con parámetro predeterminado
Array::Array(int arraySize) : size(arraySize > 0 ? arraySize : throw std::invalid_argument("Array size must be greater than 0")), ptr(new int[size]()) {
    std::cout << "Constructor: Array de tamaño " << size << " creado." << std::endl;
}

// Constructor de copia
Array::Array(const Array& arrayToCopy) : size(arrayToCopy.size), ptr(new int[size]) {
    for (size_t i = 0; i < size; ++i) {
        ptr[i] = arrayToCopy.ptr[i];
    }
    std::cout << "Constructor de copia: Array de tamaño " << size << " copiado." << std::endl;
}

// Destructor
Array::~Array() {
    delete[] ptr;
    std::cout << "Destructor: Array de tamaño " << size << " destruido." << std::endl;
}

// Devuelve el tamaño del array
size_t Array::getSize() const {
    return size;
}

// Sobrecarga del operador de asignación
const Array& Array::operator=(const Array& right) {
    if (this != &right) { // Evitar auto-asignación
        if (size != right.size) { // Si los tamaños son diferentes, liberar la memoria actual y asignar nueva memoria
            delete[] ptr;
            size = right.size;
            ptr = new int[size];
        }
        for (size_t i = 0; i < size; ++i) { // Copiar los elementos
            ptr[i] = right.ptr[i];
        }
    }
    std::cout << "Operador de asignación: Array asignado." << std::endl;
    return *this; // Permitir asignaciones encadenadas
}
/*
// Función para intercambiar los datos
void Array::swap(Array& other) {
    std::swap(size, other.size);
    std::swap(ptr, other.ptr);
}

// Sobrecarga del operador de asignación usando el patrón copy-and-swap
Array& Array::operator=(Array other) {
    swap(other);
    std::cout << "Operador de asignación: Array asignado." << std::endl;
    return *this; // Permitir asignaciones encadenadas
}*/

// Sobrecarga del operador de comparación ==
bool Array::operator==(const Array& right) const {
    if (size != right.size) {
        return false;
    }
    for (size_t i = 0; i < size; ++i) {
        if (ptr[i] != right.ptr[i]) {
            return false;
        }
    }
    return true;
}

// Sobrecarga del operador de comparación !=
bool Array::operator!=(const Array& right) const {
    return !(*this == right);
}

// Sobrecarga del operador de índice para escritura
int& Array::operator[](int index) {
    if (index < 0 || index >= static_cast<int>(size)) {
        throw std::out_of_range("Index out of range");
    }
    return ptr[index];
}

// Sobrecarga del operador de índice para lectura
int Array::operator[](int index) const {
    if (index < 0 || index >= static_cast<int>(size)) {
        throw std::out_of_range("Index out of range");
    }
    return ptr[index];
}

// Sobrecarga del operador de inserción <<
std::ostream& operator<<(std::ostream& os, const Array& arr) {
    os << "[ ";
    for (size_t i = 0; i < arr.size; ++i) {
        os << arr.ptr[i];
        if (i != arr.size - 1) {
            os << ", ";
        }
    }
    os << " ]";
    return os;
}

// Sobrecarga del operador de extracción >>
std::istream& operator>>(std::istream& is, Array& arr) {
    for (size_t i = 0; i < arr.size; ++i) {
        is >> arr.ptr[i];
    }
    return is;
}
