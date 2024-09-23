#include <iostream>
using namespace std;
// Constructor chain
class A
{
    int a, b;

public:
    A(int m, int n)
    {
        a = m;
        b = n;
    }
    void Aprintdata()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

class B : public A
{
    int x, y, z;

public:
    B(int a, int b, int c) : A((a + b), c)
    {
        x = a;
        y = b;
        z = c;
    }
    void Bprintdata()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }
};

int main()
{

    B obj(10, 20, 40);
    obj.Bprintdata();
    obj.Aprintdata();

    return 0;
}