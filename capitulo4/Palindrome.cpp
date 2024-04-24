#include <iostream>
using namespace std;

int main(){
    int num, original, reverso=0, digito;
    cout << "Ingrese un numero: ";
    cin >> num;
    original = num;
    while(num !=0){
        digito = num%10; //obtiene el ultimo digito
        reverso = reverso * 10 + digito; //construye el inverso
        num /= 10; //elimina el ultimo digito
    }
    if (original == reverso){
        cout << "Es palindromo" << endl;
    }else{
        cout << "No es palindromo" << endl;
    }
    return 0;
}