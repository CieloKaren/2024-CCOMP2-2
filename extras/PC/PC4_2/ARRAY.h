#ifndef ARRAY_H
#define ARRAY_h

#include <iostream>

class Array{
    friend std::ostream& operator<<(std::ostream&, const Array&);
    friend std::istream& operator>>(std::istream&, Array&);

    public:
        explicit Array(int = 10);
        Array(const Array&);

        ~Array();
        size_t getSize() const;

        const Array& operator=(const Array&);
        bool operator==(const Array&) const;
        bool operator!=(const Array& right) const;

        int& operator[](int);
        int operator[](int) const;

    private:
        size_t size;
        int* ptr;

};
#endif