#include <iostream>
using namespace std;
//Implemente un programa que pida por teclado una cadena considerando espacios,
// y convierta dicha cadena a Mayusculas //EXAMENparcial!!
int main(){
    string cadena;
    cout << "Ingrese una cadena: "<<endl;
    getline(cin, cadena);
    for(char &c: cadena){ //recorre cada caracter de la cadena
        if (c>='a' && c<='z'){
            c-='a' - 'A'; //resta la diferencia de 'a' y 'A'
        }
    }

    cout << "Conversion: " << "\n" << cadena << endl;
    return 0;

}