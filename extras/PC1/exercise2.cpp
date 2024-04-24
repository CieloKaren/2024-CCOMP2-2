#include <iostream>
using namespace std;

int main(){
    int x = 12345;
    while(x){
        x /= 10;
        cout << x << endl;
    }
    cout << "x tiene valor de " << ++x << "\n";
    return 0;
}

//Iteración 1: 12345 / 10 = 1234 (se imprime 1234)
//Iteración 2: 1234 / 10 = 123 (se imprime 123)
//Iteración 3: 123 / 10 = 12 (se imprime 12)
//Iteración 4: 12 / 10 = 1 (se imprime 1)
//Iteración 5: 1 / 10 = 0 (se imprime 0)
//Después de que el bucle termina, el valor 
//de x es 0. Luego, fuera del bucle, se incrementa en
//1 debido a ++x, por lo que el valor impreso será 1.*\