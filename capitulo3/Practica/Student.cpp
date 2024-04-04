//crear dos objetos de tipo Student
#include <iostream>
#include "Student.h"

using namespace std;

int main(){
    Student myStudent1("Karen", 17);
    std::cout << "Ingrese el nombre: " << myStudent1.getName();
    std::cout << "Ingrese su edad: " << myStudent1.getAge();

    std::cout << "\nIngrese su nombre: ";
    std::string TheName;
    getline(cin, TheName);
    cout << "Ingrese su edad: ";
    int TheAge;
    cin >> TheAge;
    


    Student myStudent2("Ana", 20);
    std::cout << "Ingrese el nombre: " << myStudent2.getName();
    std::cout << "Ingrese su edad: " << myStudent2.getAge();
    std::string TheName;
    getline(cin, TheName);
    cout << "Ingrese su edad: ";
    int TheAge;
    cin >> TheAge;
    cout << myStudent1.isOlder() << endl;

    
    return 0;
}