#include <iostream>
#include "Date.h"

using namespace std;

int main(){
    Date myD1{3,1,2020};
    Date myD2{15,14,2019};
    Date myD3{50,12,1500};

    myD1.displayDate();
    myD2.displayDate();
    myD3.displayDate();

    return 0;
}
