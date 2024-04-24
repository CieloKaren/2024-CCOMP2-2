#include <array>
#include "LibroCalificaciones.h"
using namespace std;

int main(){
    //arreglo de calificaciones de estudiantes
    const array<int, LibroCalificaciones::estudiantes>calificaciones=
    {87,68,94,100,83,78,85,91,76,87};
    string nombreCurso="CS101 Introducciona la programacion en C++";

    LibroCalificaciones miLibroCalificaciones(nombreCurso, calificaciones);
    miLibroCalificaciones.mostrarMensaje();
    miLibroCalificaciones.procesarCalificaciones();

}