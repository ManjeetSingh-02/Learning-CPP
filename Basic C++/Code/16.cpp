#include <iostream>
using namespace std ;

class A {
    public:
    int a, b ; // Non - Static Data
    static int c, d ; // Static Data
    void nsm() { // Non - Static Function
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;
    }
    static void sm() { // Static Function
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;
    }
};

int A::c, A::d ;

int main() {

    // A - Class
    // obj - Instance
    // A obj - obj is instance of class A
    A obj ;
    obj.a = 10 ;
    obj.b = 20 ;
    obj.c = 30 ;
    obj.d = 40 ;
    obj.nsm() ;
    obj.sm() ;
    return 0 ;

}