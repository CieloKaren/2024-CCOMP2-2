#include <iostream>
#include <string>

class Date {
    public:
        explicit Date(int m, int d, int y)
         :day{d}, year{y}{
            if (m >=1 && m < 12){
                month = m;

            }
            if (y >= 1900 && y <=2050){
               year=y;
            }
            else{
               year=1900;
            }

         }

         void setDay(int d){
            day = d;
         }

         void setMonth(int m){
            if(m >=1 && m < 12){
                month = m;
            }
         }
//validar si esta dentro 1900-2050
         void setYear(int y){
            if(y >= 1900 && y <= 2050){
               year = y;
            }
            else{
               year = 1900;
            }
         }

         int getDay() const{
            return day;
         }

         int getMonth() const{
            return month;
         }

         int getYear() const{
            return year;
         }

         void displayDate() const{
            std::cout << day << "/" << month << "/" << year << std::endl;
         } 
         //año bisisesto debe ser divisible entre 4 
         //No debe ser divisible por 100, a menos que también sea divisible por 400.

         bool isLeapYear() const{
            return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
         }
         
         bool valDate() const{
            if(month == 2) { // febrero
               if(isLeapYear()){
                  return (day >= 1 && day <=29);
               }
               else{
                  return (day >=1 && day <=28);
               }
            }

            if (month == 4 || month == 6 || month == 9 || month == 11){
               return (day >=1 && day <=30); //month 30 days
            }
            else{
               return (day >=1 && day <=31); //month 31 days
            }
         }


private:
    int day, month{1}, year;

};