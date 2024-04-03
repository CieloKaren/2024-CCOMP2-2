#include <iostream>
#include <string>
using namespace std;

class LibroCalifaciones{
    public:
        void mostrarMensaje( string nombreCurso) const{ //funcion miembro // void -> valor de retorno
            cout << "Bienvenido al Libro de Calificaciones!<\n" << nombreCurso << "!";
        }
};

int main (){
    string nombreDelCurso;
    LibroCalifaciones miLibroCalificaciones; // crea un objeto LibroCalificaciones llamado miLibroCalificiones

    cout << "Escriba el nombre del curso: " << endl;
    getline(cin, nombreDelCurso); // lee el nombre de un curso con espacios en blanco
    cout << endl; // imprime una linea en blanco
    miLibroCalificaciones.mostrarMensaje(nombreDelCurso); // llama a la funcion mostrarMensaje del objeto
}