#include <iostream>
#include "Date.h"

using namespace std;

int main(){
    Date myDate1{03,01,2020};
    myDate1.displayDate();
    cout << "Validar fecha: " <<myDate1.valDate()<<"\n"<<endl;
    if(myDate1.isLeapYear()){
        cout << "El anio es bisiesto" << endl;
    }else{
        cout << "El anio no es bisiesto" << endl; 
    }

    Date myDate2{15,14,2019};
    myDate2.displayDate();
    cout << "Validar fecha: " <<myDate2.valDate()<<"\n"<<endl;
    if(myDate2.isLeapYear()){
        cout << "El anio es bisiesto" << endl;
    }else{
        cout << "El anio no es bisiesto" << endl; 
    }

    Date myDate3{20,22,1500};
    myDate3.displayDate();
    cout << "Validar fecha: " <<myDate3.valDate()<<"\n"<<endl;
    if(myDate3.isLeapYear()){
        cout << "El anio es bisiesto" << endl;
    }else{
        cout << "El anio no es bisiesto" << endl; 
    }
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
