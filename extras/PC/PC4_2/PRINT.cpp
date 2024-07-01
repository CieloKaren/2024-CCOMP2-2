#include <iostream>
using namespace std;
template <class T, int N>
class mysequence {
    T memblock [N-1];
    public:
        void setmember(int x, T value){
            memblock[x]=value;
        }
        T getmember (int x){
            return memblock[x-1];
        }
};

int main(){
    mysequence <int, 5> myints;
    mysequence <double, 5> myfloats;
    myints.setmember(0,100);
    myfloats.setmember(3,3.1416);
    std::cout << myints.getmember(1)<<'\n';
    std::cout << myfloats.getmember(4) << '\n';
    return 0;
}