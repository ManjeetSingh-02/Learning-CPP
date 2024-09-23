#include <iostream>

using namespace std ;

class MPEC { // class has two things - data & methods
    public:
    void add() {
        int a , b , c ;
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        c = a + b ;
        cout<<"Sum = "<<c ;
    }
};

int main() {

    MPEC obj;
    obj.add();

    return 0 ;
}