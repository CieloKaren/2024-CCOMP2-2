#include <iostream>
#include <array>
using namespace std;

void inicArregloStatic();
void inicArregloAutomatico();
const size_t tamanioArreglo=3;

int main(){
    cout << "Primera llamada a la funcion:\n";
    inicArregloStatic();
    inicArregloAutomatico();

    cout << "\n\nSegunda llamada a la funcion:\n";
    inicArregloStatic();
    inicArregloAutomatico();
    cout << endl;
}

//funcion para demostrar un arreglo local static
void inicArregloStatic(void){
    static array<int, tamanioArreglo> arreglo1; //array local static

    cout << "\nValores al entrar en inicArregloStatic:\n";

    //imprime el contenido de arreglo1
    for (size_t i = 0; i < arreglo1.size(); ++i)
    cout << "arreglo1[" << i << "] = " << arreglo1[i] << " ";

    cout << "\nValores al salir de inicArregloStatic: \n";

    //modifica e imprime el contenido de arreglo1
    for(size_t j = 0; j < arreglo1.size(); ++j)
        cout << "arreglo1[" << j << "] = " << (arreglo1[j] +=5) << " ";
}// fin de la funcion inicArregloStatic

//funcion para demostrar un arreglo local automático
void inicArregloAutomatico(void){
    //inicializa los elementos cada vez que se llama a la función
    array< int, tamanioArreglo>arreglo2 = {1,2,3};//arreglo local automático

    cout << "\n\nValores al entrar a inicArregloAutomatico:\n";

    //imprime el contenido de arreglo2

    for (size_t i = 0; i < arreglo2.size(); ++ i)
    cout << "arreglo2[" << i << "] = " << arreglo2[i] << " "; 

    cout << "\nValores al salir de inicArregloAutomatico:\n";

    //modifica e imprime el contenido de arreglo2
    for (size_t j = 0; j < arreglo2.size(); ++j)
    cout << "arreglo2["<< j << "] = " << (arreglo2[j] +=5)<< " ";
}//fin de la funcion inicArregloAutomatico