#include <iostream>
using namespace std;
int potencia(int base, int exponente) // firma de la funcion
{
    int result = 1;
    for (int i=0; i<exponente; i=i+1){
        result = result * base;
    } return result; //setencia return --> valor de retorno
    
}

int main (){
    int tresExpCuatro = potencia(2,3);
    cout << "3^4" << tresExpCuatro << endl;
    return 0;
}