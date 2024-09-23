#include <iostream>
using namespace std;

// creating class -> incapsulation
// incapsulation -> putting necessarry data and methods inside a class

class ADD {
    int a , b , c ;
    
    public: // Access Specifier (public, private, protected) , private and protected both are same if inheritence is not used
    void input()
    {
        cout<<"Enter 2 numbers: ";
        cin>>a>>b;
    }
    void process()
    {
        c = a + b ;
    }
    void output()
    {
        cout<<"Sum = "<<c;
    }
};

int main()
{
    ADD obj; // object memory allocation done (a,b,c)
    obj.input();
    obj.process();
    obj.output();
    
    return 0 ;
}