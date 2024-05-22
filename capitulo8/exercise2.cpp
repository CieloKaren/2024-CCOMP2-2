int sum(const int *arr, int tam){
    int sum = 0;
    for(int i=0; i < tam; i++, arr++)
    sum += *arr;
    return sum;
}

int main(){
    int arr[] = {1,2,3,4,5};
    cout << sum(arr, 5) << endl;
}

#include <iostream>
using namespace std;

int sum(const int *arr, int tam) {
    // Caso base: si el tamaño es 0, la suma es 0
    if (tam == 0)
        return 0;

    // Sumar el primer elemento del arreglo y llamar recursivamente con el resto del arreglo
    return *arr + sum(arr + 1, tam - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << sum(arr, 5) << endl;
    return 0;
}
