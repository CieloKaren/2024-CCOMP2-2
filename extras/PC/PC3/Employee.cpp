#include "Employee.h"
#include <iostream>
using namespace std;
// Inicialización de la variable estática count.
unsigned int Employee::count = 0;

// Constructor que incrementa el contador de empleados.
Employee::Employee(const std::string &first, const std::string &last)
    : firstName(first), lastName(last) {
    ++count; // Incrementa el contador de empleados.
    std::cout << "Constructor de Employee para " << firstName
              << " " << lastName << " llamado." << std::endl;
}

// Destructor que decrementa el contador de empleados.
Employee::~Employee() {
    --count; // Decrementa el contador de empleados.
    std::cout << "Destructor de Employee para " << firstName
              << " " << lastName << " llamado." << std::endl;
}

// Retorna el nombre del empleado.
std::string Employee::getFirstName() const {
    return firstName;
}

// Retorna el apellido del empleado.
std::string Employee::getLastName() const {
    return lastName;
}

// Retorna el número de empleados.
unsigned int Employee::getCount() {
    return count;
}

int main() {
    // Crear un puntero para un arreglo de Employees en el heap.
    Employee* employees = new Employee[5] {
        Employee("Nombre1", "Apellido1"),
        Employee("Nombre2", "Apellido2"),
        Employee("Nombre3", "Apellido3"),
        Employee("Nombre4", "Apellido4"),
        Employee("Nombre5", "Apellido5")
    };


    // libera la memoria asignada en el heap 
    delete[] employees;

    return 0;
}
