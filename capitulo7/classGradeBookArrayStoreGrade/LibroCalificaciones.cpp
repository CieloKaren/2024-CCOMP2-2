//Case Study: Class GradeBook Using an array to Store Grades
#include <iostream>
#include "LibroCalificaciones.h"
using namespace std;

int main(){
    const array<int, LibroCalificaciones::estudiantes> calificaciones =
    {87,68,94,100,83,78,85,91,76,87};
    string nombreCurso = "CS101 Introduccion a la programacion en C++";

    LibroCalificaciones miLibroCalificaciones(nombreCurso, calificaciones);
    miLibroCalificaciones.displayMensaje();
    miLibroCalificaciones.processCalificaciones();
}