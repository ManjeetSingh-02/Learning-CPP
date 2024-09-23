#include <iostream>
using namespace std;

class A
{
public:
    int a;
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

int main()
{
    return 0;
}

// Dimaond Problem in Inheritance
// B has A->a
// C has A->a
// D has B-A->a & C-A->a so, now object of D will confuse to occupy which a (from B or C)
// C++ solve diamond problem via VIRTUAL BASE CLASS concept