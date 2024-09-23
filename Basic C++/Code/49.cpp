#include <iostream>
using namespace std;

class A
{
    int a;
    int b;

public:
    A()
    {
    }
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    int operator<(A tmp)
    {
        if (this->a < tmp.a && this->b < tmp.b)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    A obj1(30, 20), obj2(10, 15);
    if (obj1 < obj2)
    {
        obj1.display();
    }
    else
    {
        obj2.display();
    }
    return 0;
}