#include <iostream>
using namespace std;

int fibonacci(int numero){
    int numero;
    int t1=1;
    int t2=1;
    int t3=1;

    for(int i=1; i<=numero; i++){
        if (i == 1){
            continue;
        }
        t3 = t1+t2;
        t1 = t2;
        t2 = t3;
    }
    return t3;
}

int fibo_recursivo(int numero){
    if (numero == 1 || numero == 0){
        return 1;
    } else{
        return fibo_recursivo(numero-1)+fibo_recursivo(numero-2);

    }
}

int main(){
    int numero;
    int t1=1;
    int t2=1;
    int t3=1;

    cout << "Ingrese un numero ";
    cin >> numero;
    cout <<"El" << numero << "fibonacci es: " << fibonacci(numero) << endl; 
    cout <<"El" << numero << "fibonacci es: " << fibo_recursivo(numero) << endl; 

}