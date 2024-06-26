#include <iostream>
#include <string>
using namespace std;

class LibroCalificaciones{
    public:
        //funcion establece el nombre del curso
        void establecerNombreCurso (string nombre){
            nombreCurso = nombre; //almacena el nombre del curso en el objeto
        }
    string obtenerNombreCurso() const{
        return nombreCurso;
    }

    void mostrarMensaje() const{
        cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() << "!" << endl;
    }

    private:
        string nombreCurso;
};

int main(){
    string nombreDelCurso;
    LibroCalificaciones miLibroCalificaciones;

    cout << "\nEl nombre inicial del curso es:" << miLibroCalificaciones.obtenerNombreCurso() << endl;

    cout << "\nEscriba el nombre del curso:" << endl;
    getline(cin, nombreDelCurso);

    miLibroCalificaciones.establecerNombreCurso(nombreDelCurso);

    cout << endl;
    miLibroCalificaciones.mostrarMensaje();
}
    