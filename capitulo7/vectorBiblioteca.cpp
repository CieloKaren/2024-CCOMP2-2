#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void imprimirVector(const vector<int>&); //muestra el vector
void recibirVector(vector<int>&); //introduce los valores en el vector

int main(){
    vector<int> integers1(7); //vector de 7 elementos
    vector<int> integers2(10);

    cout <<"El tamanio del vector integers1 es " << integers1.size()
        << "\nvector despues de la inicializacion:";
    imprimirVector(integers1);

    cout << "\nEl tamnio del vector integers2 es " << integers2.size()
        <<"\vector despues de la inicializacion:";
    imprimirVector(integers2);

    cout << "\nEscriba 17 integers:" << endl;
    recibirVector(integers1);
    recibirVector(integers2);

    cout << "\nDespues de la entrada, los vectores contienen:\n" << 
    "integers1: ";
    imprimirVector(integers1);
    cout << "integers2: ";
    imprimirVector(integers2);

    cout << "\nEvaluando: integers1 != integers2"<<endl;

    if(integers1 != integers2){
        cout << "integers1 and integers2 no son iguales" << endl;
    }

    //crea el vector de integers3 como un inicializador;
    //imprime el tamaño y el contenido
    vector<int> integers3{integers1}; //constructor copia

    cout <<"\nEl tamanio del vector integers3 es " << integers3.size()
        <<"\nvector despues de la inicializacion: ";
    imprimirVector(integers3);

    //usa el operador de asignacion (=) sobrecargado
    cout <<"\nAsignacion de integers2 a integers1:"<<endl;
    integers1=integers2; //asigna integers1 a integers2

    cout<<"integers1: ";
    imprimirVector(integers1);
    cout<<"integers2: ";
    imprimirVector(integers2);

    //usa el operador de igualdad (==) con objetos vector
    cout <<"\nEvaluando: integers1 == integers2"<<endl;
    if (integers1==integers2){
        cout<<"integers1 y integers2 son iguales" << endl;
    }

    //usa corchetes para asignar el valor en la ubicacion 5 como un rvalue
    cout<<"\nenteros[5] es "<<integers1[5];

    //usa corchetes para crear rvalue
    cout<<"\n\nAsignacion de 1000 a integers1[5]" <<endl;
    integers1[5]=1000;
    cout<<"integers1: ";
    imprimirVector(integers1);

    //intenta usarsubindice fuera de rango
    try{
        cout <<"\nIntento de mostrar integers1.at(15)"<<endl;
        cout<<integers1.at(15)<<endl; //ERROR: fuera de rango
    }
    catch (out_of_range& ex){
        cerr << "Ocurrio una excepcion: "<<ex.what()<<endl;
    }

    //cambiara el tamaño de un vector
    cout<<"\nEl tamanio actual de integers3 es: "<<integers3.size() << endl;
    integers3.push_back(1000); //agrega 1000 al final del vector
    cout << "El tamanio nuevo de integers3 es: "<<integers3.size()<<endl;
    cout << "Ahora integers3 contiene: ";
    imprimirVector(integers3);
}

//imprime el contenido de vector
void imprimirVector(const vector<int>& elementos){
    for(int elemento : elementos)
        cout << elemento << " ";

    cout << endl;
}

//recibe el contenido del vector
void recibirVector(vector<int>& elementos){
    for(int &elemento : elementos)
        cin >> elemento;
}