#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
    protected:
        std::string nombre;
        int edad;
    public:
        Persona(std::string n, int e) : nombre(n), edad(e) {}
        std::string getNombre() const;
        void setNombre(std::string n);
        int getEdad() const;
        void setEdad(int e);
        void print() const;
};

#endif // PERSONA_H
