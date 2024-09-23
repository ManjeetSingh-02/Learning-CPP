#include <iostream>
using namespace std;
// Constructor chain
class A
{
    int a;

public:
    A(int tmp)
    {
        a = tmp;
        cout << "a = " << a << endl;
    }
};
class B : public A
{
    int b;

public:
    B(int m, int n) : A(n)
    {
        b = m;
        cout << "b = " << b << endl;
    }
};
class C : public B
{
    int c;

public:
    C(int x, int y, int z) : B(y, z)
    {
        c = x;
        cout << "c = " << c << endl;
    }
};
int main()
{
    C obj(10, 20, 30);
}