/*Implemente una funcion que reciba un entero n e imprima 
* los n primeros numeros primos*/

#include <iostream>
using namespace std;

bool esPrimo(int numero){ // firma de la funcion... solo evalua si es primo
// y evaluar si es falso o no
    if (numero%2==0 || numero == 0 || numero == 1) return false;
    for(int i = 2; i*i <= numero/2; i++){
        if(numero%i==0){
            return false;
        }
        return true;
    } 
    
}

void printNPrimos(int numero){    //n=5
    int tmp = 2;                    //tmp = 2
    int counter = 1;                //counter = 1
    while (counter <= numero){      // MIENTRAS contandor <= n
        if(esPrimo(tmp)) {    //           SI tmp es primo
            cout << tmp << " ";         //     imprime tmp
            counter++;                      // incremento contador
        }                              //  
        tmp++;                         //    
    }
    cout << endl;
} 

int main (){
    long long numero;
    bool noEsPrimo = false;
    cout<<"Introduce el numero: ";
    cin>>numero;
    return 0;
}  
   
