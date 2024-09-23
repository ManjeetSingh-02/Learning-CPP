#include <iostream>
using namespace std ;

class MPEC {
    public: // by default private members
    void msg() {
        cout<<"Object Oriented Approach";
    }
};

int main() {
    
    // class object/instance
    MPEC obj;
    // obj method
    obj.msg();

    return 0 ;
}