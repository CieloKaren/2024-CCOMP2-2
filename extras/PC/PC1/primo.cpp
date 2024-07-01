#include <iostream>
using namespace std;

int main(){
    int n;
    bool esPrimo = true;
    cout << "Ingrese un numero: ";
    cin >> n;
    if(n == 0 || n == 1){
        cout << "No es primo";
    }else{
        cout << "Es primo";
    }
    for(int i=1; i<=n; i+=1){
        if(n%i==0){
            counter+=1;
        }

    }
    if(n==2){
        cout << "Es primo" << endl;
    }else{
        cout << "No es primo" << endl;
    }

    return 0;
}