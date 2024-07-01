#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    Employee(const std::string&, const std::string&);
    ~Employee(); // destructor
    std::string getFirstName() const;
    std::string getLastName() const;
    // static member function
    static unsigned int getCount();

private:
    std::string firstName;
    std::string lastName;
    // static data
    static unsigned int count;
};

#endif
