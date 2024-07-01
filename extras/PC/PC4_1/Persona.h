#include <iostream>
#include <string>
using namespace std;

class Persona{
    protected:
        string nombre;
        int edad;
    public:

        // constructor con parametros
        Persona(string n, int e) : nombre(n), edad(e){}
        // constructor predeterminado
        Persona() : nombre(""), edad(0) {}
        std::string getNombre () const{
            return nombre;
        }
        void setNombre(std::string n){
            nombre = n;
        }
        int getEdad() const{
            return edad;
        }
        void setEdad(int e){
            edad = e;
        }
        void print() const{
            cout << "Nombre: " << nombre << " edad: "<< edad << endl;
        }


};