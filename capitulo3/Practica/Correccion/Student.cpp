#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    string name;
    int age;
    cout << "Ingrese nombre del primer estudiante por favor: ";
    getline(cin, name);
    cout << "Ingrese la edad del primer estudiante por favor: ";
    cin >> age;

    Student s1{name, age};
    
    cout << "Ingrese nombre del segundo estudiante por favor: ";
    cin.ignore();
    getline(cin, name);
    cout << "Ingrese la edad del segundo estudiante por favor: ";
    cin >> age;

    Student s2{name, age};

    cout << "Nombre primer estudiante:\n " << s1.getName() << endl;
    cout << "Edad primer estudiante:\n " << s1.getAge() << endl; 
    cout << "Mayor de edad: " << ( (s1.isOlder()) ? "Si" : "No" ) << endl;

    cout << "Nombre segundo estudiante:\n " << s2.getName() << endl;
    cout << "Edad segundo estudiante:\n " << s2.getAge() << endl; 
    cout << "Mayor de edad: " << ( (s2.isOlder()) ? "Si" : "No" ) << endl;

    return 0;
}