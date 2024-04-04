#include <iostream>
#include "Date.h"

using namespace std;

int main(){
    Date myDate1{03,01,2020};
    myDate1.displayDate();
    cout << "Validar fecha" <<myDate1.valDate()<<"\n"<<endl;
    cout << "Año bisiesto: " <<myDate1.isLeapYear()<<endl;

    Date myDate2{15,14,2019};
    myDate2.displayDate();
    cout << "Validar fecha" <<myDate2.valDate()<<"\n"<<endl;
    cout << "Año bisiesto: " <<myDate2.isLeapYear()<<endl;

    Date myDate3{20,22,1500};
    myDate3.displayDate();
    cout << "Validar fecha" <<myDate3.valDate()<<"\n"<<endl;
    cout << "Año bisiesto: " <<myDate3.isLeapYear()<<endl;

    /*Date newDate()
    int year;
    cout << "Introduce un año para verificar";
    cin>>year;
    if(isLeapYear(year)){
        cout<<"año bisiesto"<<endl;
    }
    else{
        cout<<"año no bisiesto"<<endl;
    }*/

    return 0;
}
