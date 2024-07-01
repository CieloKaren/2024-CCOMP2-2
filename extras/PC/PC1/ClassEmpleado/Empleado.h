#include <iostream>
#include <string>

class Empleado {
private:
    std::string nombre;
    std::string apellido;
    double salario;

public:
    // Constructor
    Empleado(std::string _nombre, std::string _apellido, double _salario)
        : nombre(_nombre), apellido(_apellido), salario(_salario > 0 ? _salario : 0) {}

    // Getters
    std::string getNombre() { return nombre; }
    std::string getApellido() { return apellido; }
    double getSalario() { return salario; }

    // Setters
    void setNombre(std::string _nombre) { nombre = _nombre; }
    void setApellido(std::string _apellido) { apellido = _apellido; }
    void setSalario(double _salario) { if (_salario > 0) salario = _salario; }
};

