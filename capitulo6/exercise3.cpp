#include <iostream>
using namespace std;
/*stringUppercase.cpp*/
string convertirCadenaAMayuscula(string cadena){
        char c;
        for( int i = 0; i < cadena.size(); i++){ //recorre cada caracter de la cadena
        c = cadena.at(i);    
        int val = static_cast<int>(c);
        if(val >= 97 && val <= 122)
            cadena.at(i) = c - 32; // toupper(c);
        }
        return cadena;
    }

int main(){
    string cadena;
    cout << "Ingrese una cadena: "<<endl;
    getline(cin, cadena);

    cout << "Conversion: " << "\n" << convertirCadenaAMayuscula(cadena) << endl;
    return 0;

}