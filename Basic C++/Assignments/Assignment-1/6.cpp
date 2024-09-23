#include <iostream>
using namespace std;

// Multi level
class A
{
};

class B : public A
{
};

class C : public B
{
};

// Multiple
class X
{
};

class Y
{
};

class Z : public Y, public X
{
};

int main()
{
    return 0;
}