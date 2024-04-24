#include <iostream>
using namespace std;

class LibroCalificaciones{
    public:
        //funcion que muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
        void mostrarMensaje() const{ //al declarar const se indica al compilador que "esta funcion no debe modificar el objeto sobre el cual se llama"
            cout << "Bienvenido al libro de Calificaciones!" << endl;
        }
};

int main(){
    LibroCalificaciones miLibroCalificaciones; //crea un objeto LibroCalificaciones llamado "miLibroCalificaciones"
    miLibroCalificaciones.mostrarMensaje();
}