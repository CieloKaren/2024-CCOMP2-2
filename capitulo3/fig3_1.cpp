#include <iostream>
using namespace std;

class LibroCalificaciones{
    public:
        void mostrarMensaje() const{
            cout << "Bienvenido al libro de Calificaciones!" << endl;
        }
};

int main(){
    LibroCalificaciones miLibroCalificaciones; //crea un objeto LibroCalificaciones llamado "miLibroCalificaciones"
    miLibroCalificaciones.mostrarMensaje();
}