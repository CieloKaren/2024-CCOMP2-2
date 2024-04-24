#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm> // contiene sort y binary_search
using namespace std;

int main(){
    const size_t tamanioArreglo = 7; //tamanio del arreglo
    array<string, tamanioArreglo>colores={"rojo", "naranja", 
    "amarillo", "verde", "azul", "indigo", "violeta" };
    //imprime el arreglo original
    cout<<"Areglo desordenado:\n";
    for(string color:colores){
        cout << color << " ";
    }
    sort(colores.begin(), colores.end()); //ordena el contenido 
    //de los colores
    //Imprime arreglo ordenado
    cout << "\nArreglo ordenado:\n";
    for (string elemento : colores)
        cout << elemento << " ";
    //busca "indigo" en colores
    bool encontro=binary_search(colores.begin(), colores.end(), "indigo");
    cout << "\n\nindigo\n"<< (encontro ? "si " : "no ") 
    << "se encuentra en colores" << endl;
    //busca "cyan" en colores
    encontro=binary_search(colores.begin(), colores.end(), "cyan");
    cout << "\n\ncyan\n"<< (encontro ? "si " : "no ") 
    << "se encuentra en colores" << endl;

}