#include <iostream>
using namespace std;

class CDummy{
    public:
    static int n;
    CDummy(){ ++n; }
    ~CDummy(){ --n; }
};

int CDummy::n = 0;

int main(){
    CDummy *a;
    if(true){
        CDummy x;
        a = new CDummy;
        cout << CDummy::n << endl;
    }
    CDummy b[2];
    CDummy c;
    cout << CDummy::n << endl;

    delete a;
    cout << CDummy::n << endl;

    return 0;

}