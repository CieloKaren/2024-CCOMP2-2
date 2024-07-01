/*Implemente una función swap(intercambio de valores), la cual recibe 
como parámetros 2 variables enteras y tiene como objetivo intercambiar
sus valores. Incluya la función principal (main) y la invocación a dicha
función, pasando los argumentos de forma correcta. (explique su codigo)
*/
#include <iostream>

using namespace std;

void intercambio(int &x, int &y);

int main() {
    int a = 10;
    int b = 20;
    intercambio(a, b);

    cout << a << endl;
    cout << b << endl;
}

void intercambio(int &x, int &y) {
    int tmp = x;
    x = y;
    y = tmp;
}