#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A Class Constructor";
    }
};
class B : public A
{
public:
    B()
    {
        cout << "B Class Constructor";
    }
};
class C : public B
{
public:
    C()
    {
        cout << "C Class Constructor";
    }
};

int main()
{
    C obj;
    return 0;
}

// C obj called C constructor --- C constructor called B constructor --- B constructor called A constructor ------ A constructor executed --- B constructor executed --- C constructor executed

// A Class Constructor
// B Class Constructor
// C Class Constructor