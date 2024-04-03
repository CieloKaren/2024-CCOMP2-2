#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones{
    public:
        void mostrarMensaje(string nombreCurso) const{
            cout << "Bienvenido al libro de calificaciones para\n" << nombreCurso << "!" << endl;
        }
};
int main(){
    string nombreDelCurso; // cadena de caracteres que almacena el nombre del curso
    LibroCalificaciones miLibroCalificaciones;

    cout << "Escriba el nombre del curso" << endl;
    getline(cin, nombreDelCurso);
    cout << endl;

    miLibroCalificaciones.mostrarMensaje(nombreDelCurso);
}