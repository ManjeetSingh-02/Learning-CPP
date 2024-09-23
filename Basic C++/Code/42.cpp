#include <iostream>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "A" << endl;
    }
};
class B
{
public:
    void print()
    {
        cout << "B" << endl;
    }
};
class C : public B, public A
{
};

int main()
{
    C obj;
    obj.A::print();
    obj.B::print();
    return 0;
}

// if the name of method of two classes are same then there is function ambiguity
// print function is ambiguous
// to deal with this, we use SRO operator [object.class::function()]