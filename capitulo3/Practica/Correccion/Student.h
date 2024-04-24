#include <iostream>
#include <string>

class Student{
    private:
    std::string name;
    int age;
    public:
        explicit Student(std::string n, int a)
            :name{n}, age{a}{
            }

            bool isOlder() const{
                if((age > 18) || (age == 18)){
                    return true;
                
                }else{
                    return false;
                }
            }

            void setName(int n){
                name = n;
            }

            void setAge(int a){
                age = a;
            }

            std::string getName() const{
                return name;
            }

            int getAge() const{
                return age;
            }


    
};