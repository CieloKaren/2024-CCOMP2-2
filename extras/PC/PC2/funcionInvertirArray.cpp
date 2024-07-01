/*Implemente dos funciones, una recursiva y otra iterativa, 
para invertir los elementos de un arreglo de enteros. Las
funciones deben recibir, como mínimo, el arreglo de enteros
y el tamaño del arreglo. Explica*/

#include <iostream>
using namespace std;

// Función iterativa para invertir un arreglo
void invertirIterativo(int arr[], int tam) {
    int inicio = 0;
    int fin = tam - 1;
    while (inicio < fin) {
        int temp = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = temp;
        inicio++;
        fin--;
    }
}

// Función recursiva para invertir un arreglo
void invertirRecursivo(int arr[], int inicio, int fin) {
    if (inicio >= fin) return;
    int temp = arr[inicio];
    arr[inicio] = arr[fin];
    arr[fin] = temp;
    invertirRecursivo(arr, inicio + 1, fin - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int tam = sizeof(arr)/sizeof(arr[0]);

    cout << "Arreglo original: ";
    for(int i = 0; i < tam; i++) cout << arr[i] << " ";
    cout << endl;

    invertirIterativo(arr, tam);

    cout << "Arreglo invertido (Iterativo): ";
    for(int i = 0; i < tam; i++) cout << arr[i] << " ";
    cout << endl;

    invertirRecursivo(arr, 0, tam - 1);

    cout << "Arreglo invertido (Recursivo): ";
    for(int i = 0; i < tam; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
