//crear dos objetos de tipo Student
#include <iostream>
#include "Student.h"

using namespace std;

int main(){
    Student myStudent1("Karen", 17);
    Student myStudent2("Ana",20);
    
 // Solicitar datos para un nuevo estudiante
    cout << "Ingrese el nombre: ";
    string TheName;
    getline(cin, TheName);
    cout << "Ingrese su edad: ";
    int TheAge;
    cin >> TheAge;
    //cin.ignore(); // Limpiar el buffer de entrada

    // Crear un nuevo objeto Student con los datos ingresados
    Student newStudent(TheName, TheAge);

    // Imprimir los datos del nuevo estudiante y verificar si es mayor o menor de edad
    cout << "\nDatos del nuevo estudiante:\n";
    cout << "Nombre: " << newStudent.getName() << endl;
    cout << "Edad: " << newStudent.getAge() << endl;
    if(newStudent.isOlder()){
        cout << "El estudiante es mayor de edad" << endl;
    } else {
        cout << "El estudiante es menor de edad" << endl;
    }

    // Verificar si los estudiantes originales son mayores o menores de edad
    cout << "\nDatos del primer estudiante:\n";
    cout << "Nombre: " << myStudent1.getName() << endl;
    cout << "Edad: " << myStudent1.getAge() << endl;
    if(myStudent1.isOlder()){
        cout << "El estudiante es mayor de edad" << endl;
    } else {
        cout << "El estudiante es menor de edad" << endl;
    }

    cout << "\nDatos del segundo estudiante:\n";
    cout << "Nombre: " << myStudent2.getName() << endl;
    cout << "Edad: " << myStudent2.getAge() << endl;
    if(myStudent2.isOlder()){
        cout << "El estudiante es mayor de edad" << endl;
    } else {
        cout << "El estudiante es menor de edad" << endl;
    }
    
    return 0;
}