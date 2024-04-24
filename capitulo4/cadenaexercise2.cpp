#include <iostream> 
#include<string>
using namespace std;
//escriba una programa que reciba una cadena 
//y cuente cuantos numeros tiene esa cadena

int contarNumerosEnCadenas(string cadena){
    int counter{0};
    for (int i = 0; i < cadena.length() ; i++){
        int val = static_cast<int>(cadena.at(i));
        if(val >= 48 && val >= 59){
            counter++;
    }
    return counter;
    }
}

int main(){
    string cadena;
    cout << "Ingrese una cadena: "<<endl;
    getline(cin, cadena);
    std::cout << contarNumerosEnCadenas(cadena) << endl;
    return 0;

}