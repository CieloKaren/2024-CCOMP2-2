#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 5> items = {1, 2, 3, 4, 5};
    //muestra los items antes de modificarlos
    cout << "items antes de modificarlos: ";
    for(int item : items){ //->sintaxis
    //for ( declaracionVariableRango : expresion)
        cout << item << " "; //instruccion
    }
    //multiplica los elementos de los items *2
    for (int &refItem : items){
        refItem*=2;
    }
    //muestra los items despues de modificarlos
    cout << "\nitems despues de modificarlos: ";
    for (int item : items){
        cout << item << " ";
    }
    cout << endl;
}// fin