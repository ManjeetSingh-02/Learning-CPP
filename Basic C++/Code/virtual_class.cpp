#include <iostream>
using namespace std;

class A
{
public:
    int a;
};

class B : public virtual A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
};

int main()
{
    D obj;
    obj.a = 10;
    cout << obj.a;
    return 0;
}

// To solve diamond problem, we use VIRTUAL CLASS
// virtual keyword is used before inheriting the classes
// public virtual A == virtual public A