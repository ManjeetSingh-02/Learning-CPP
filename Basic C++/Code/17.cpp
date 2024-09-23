#include <iostream>
using namespace std ;

class A {
    int a, b ; // a,b -> instance variable
    static int c, d ; // c,d -> class variable
    public:
    void nsm(int x , int y) { // x,y -> local variable
        a = x ;
        b = y ;

        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;
    }
    static void sm() {
        cout<<"c = "<<c<<endl;
        cout<<"d = "<<d<<endl;
    }
};

int A::c = 30, A::d = 40 ;

int main() {

    A obj ;
    cout<<"OBJ DATA =>"<<endl;
    obj.nsm(10, 20) ;
    cout<<"Class Data =>"<<endl;
    A::sm();
    return 0 ;

}