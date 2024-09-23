#include <iostream>
using namespace std;

class abc {
    public:
    void show();
};

inline void abc::show() {
    cout<<"Hello";
}

int main() {

    abc x;
    x.show();
    return 0 ;
}