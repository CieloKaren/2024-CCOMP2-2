/*Explique detalladamente que los valroes que toma cada variable, 
el ¿porque de dicho valor?, de acuerdo al siguiente codigo e indique
en un cuadro que es lo que imprime el programa*/

#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int y = 5;

    int &ptr = ++x; //Aquí estamos creando una referencia ptr que apunta a x después de incrementar x en 1.
    cout << ptr ++ << endl; //ptr tiene el valor 11.

    int arr[]={1,2,0,4,9,10}; //: Se declara un arreglo llamado arr con los valores dados

    int i = 0; // Se inicializa la variable i con 0
    while(arr[i]){ // Comienza un bucle while que se ejecuta mientras arr[i] sea diferente de 0
        if (x%2){ //Se verifica si x es impar (x % 2 devuelve 1 si x es impar)
                    //Como x es 11, que es impar, se ejecuta el break, saliendo del bucle.
            break;
        }
        else{
            cout << arr[i]<<endl; // Se imprime el valor de arr[i], que es 1
        }
        cout << x++ << endl; // Se imprime x, que ahora es 12
        i++;
    }
}