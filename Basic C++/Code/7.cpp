#include <iostream>
using namespace std;

class ADD {
    int a , b , c ;
    
    public:
    // declaring method inside class
    void input();
    // if a function is declared inside a class, it's by default not inline()
    inline void process();
    // declaring & defining method inside class
    // if a function is defined inside a class, it's by default inline()
    void output()
    {
        cout<<"Sum = "<<c;
    }
};

// defining method outside class via Scope Resolution Operator/SRO(::)
void ADD::input() // input method belong to ADD class
{
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
}

inline void ADD::process() // process method belong to ADD class
{
    c = a + b ;
}

int main()
{
    ADD obj;
    obj.input();
    obj.process();
    obj.output();
    
    return 0 ;
}