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
    A operator-()
    {
        this->a = -1 * this->a;
        this->b = -1 * this->b;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    A obj1(11, 22), obj2, obj3;
    obj2 = -obj1;
    obj3 = obj2; // Already overloaded obj3(obj2)
    obj1.display();
    return 0;
}