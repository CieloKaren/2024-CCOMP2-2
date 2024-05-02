#include <iostream> /*7.24 7.25 7.28 7.29*/
#include <string>
#include <array>
#include <iomanip>
using namespace std;

int main(){
    //Arreglo bidimensional de las calicaciones
    //de estudiantes
    array<array<int, TableroAjedrez::>, LibroCalificaciones::estudiantes> calificaciones = {
        horizontal[0]=2,

        };

    LibroCalificaciones myLibroCalificaciones("CS101 Introduccion a la programacion en C++", calificaciones);
    myLibroCalificaciones.displayMensaje();
    myLibroCalificaciones.processCalificaciones();

}