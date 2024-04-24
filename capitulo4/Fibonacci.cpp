#include <iostream>
using namespace std;

int main(){
    int numero;
    int t1=1;
    int t2=1;
    int t3;

    cout << "Ingrese un numero ";
    cin >> numero;
    for(int i=1; i<=numero; i++){
        if (i == 1){
            continue;
        }
        if(i == 2){
            continue;
        }
        t3 = t1+t2;
        t1 = t2;
        t2 = t3;
    }

    cout << "El" << numero << "fibonacci es: " << t3;
    return 0;

}
    //int fibo(int n){
      //  if(n<=1){
         //   return n;
       // }else{
          //  return fibo((n-1)+fibo(2-2));
        //}
    //}
