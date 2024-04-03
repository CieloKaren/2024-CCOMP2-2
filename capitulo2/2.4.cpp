#include <iostream>

int main (){
    int num1, num2=0;
    int suma=0;

    std::cout << "Escriba el primer número";
    std::cin >> num1;

    std::cout << "Escribe el segundo número";
    std::cin >> num2;

    suma = num1 + num2;

    std::cout << "La suma es " << suma << std::endl;

    return 0;
}