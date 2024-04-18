#include <iostream>
using namespace std;

bool esPrimo(int numero){ // firma de la funcion... solo evalua si es primo
// y evaluar si es falso o no
    if (numero%2==0) return false;
    for(int i = 2; i <= numero/2; i++){
        if(numero%i==0){
            return false;
        }
        return true;
    } //setencia return --> valor de retorno
    
}

int main (){
    long long numero;
    bool noEsPrimo = false;
    cout<<"Introduce el numero: ";
    cin>>numero;
    
    if( esPrimo(numero)) {
        cout << numero << " ES PRIMO" << endl;
    }else{
        cout << numero << " NO ES PRIMO" << endl;
    }
    return 0;
}