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
    A operator-(A tmp)
    {
        A tmp2;
        tmp2.a = this->a - tmp.a;
        tmp2.b = this->b - tmp.b;
        return tmp2;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    A obj1(30, 20), obj2(10, 15), obj3;
    obj3 = obj1 - obj2;
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}