#include <iostream>
#include "Empleado.h"
#include <string>


int main() {
    std::string nombre, apellido;
    double salario;

    std::cout << "Introduce los datos para el primer empleado (nombre, apellido, salario): ";
    std::cin >> nombre >> apellido >> salario;
    Empleado e1(nombre, apellido, salario);

    std::cout << "Introduce los datos para el segundo empleado (nombre, apellido, salario): ";
    std::cin >> nombre >> apellido >> salario;
    Empleado e2(nombre, apellido, salario);

    std::cout << "\nDatos del primer empleado:\n";
    std::cout << "Nombre: " << e1.getNombre() << "\nApellido: " << e1.getApellido() << "\nSalario: " << e1.getSalario() << "\n";

    std::cout << "\nDatos del segundo empleado:\n";
    std::cout << "Nombre: " << e2.getNombre() << "\nApellido: " << e2.getApellido() << "\nSalario: " << e2.getSalario() << "\n";

    return 0;
}