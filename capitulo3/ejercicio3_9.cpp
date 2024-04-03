#include <iostream>
#include "ejercicio3_9.h"

using namespace std;

int main (){

    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout << "account1: " << account1.getName() << "balance is $" << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "Balance is $" << account2.getBalance();
    
    cout << "Ingrese la suma del deposito a la cuenta1: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding" << depositAmount << "a la cuenta1 balance"; 
    account1.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
    cout << "\n\naccount2: " << account2.getName() << "balance is $" << account2.getBalance();

    cout << "Ingrese la suma del deposito a la cuenta2: ";
    int depositAmount;
    cin >> depositAmount;
    cout << "adding" << depositAmount << "a la cuenta1 balance"; 
    account2.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
    cout << "\n\naccount2: " << account2.getName() << "balance is $" << account2.getBalance();

    cout << "Ingrese el monto a retirar de la cuenta1: "
    int retirarSuma;
    cin >> retirarSuma;
    cout << "retirar " << retirarSuma << "a la cuenta 1 balance";
    account1.retirar(retirarSuma);

}