#include <iostream>
using namespace std;

int main(){

    long long numero;
    bool noEsPrimo = false;

    cout<<"Introduce el numero: ";cin>>numero;

    for(int i = 2; i <= numero/2; i++){
        if(numero%i==0){
            noEsPrimo = true;
            break;
        }
    }

    if( !noEsPrimo ) {
        cout << numero << " ES PRIMO" << endl;
    }else{
        cout << numero << " NO ES PRIMO" << endl;
    }

    return 0;
}