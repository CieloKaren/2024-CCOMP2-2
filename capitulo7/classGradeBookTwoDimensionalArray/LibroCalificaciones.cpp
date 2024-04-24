//Case Study: Class GradeBook Using an array to Store Grades
#include <array>
#include "LibroCalificaciones.h"
using namespace std;

int main(){
    //Arreglo bidimensional de las calicaciones
    //de estudiantes
    array<array<int, LibroCalificaciones::pruebas>, LibroCalificaciones::estudiantes> calificaciones = {
        87, 96, 70,
        68, 87, 90,
        94, 100, 90,
        100, 81, 82,
        83, 65, 85,
        78, 87, 65,
        85, 75, 83,
        91, 94, 100,
        76, 72, 84,
        87, 93, 73
        };

    LibroCalificaciones myLibroCalificaciones("CS101 Introduccion a la programacion en C++", calificaciones);
    myLibroCalificaciones.displayMensaje();
    myLibroCalificaciones.processCalificaciones();

}