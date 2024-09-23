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
    A operator+(A tmp)
    {
        A tmp2;
        tmp2.a = this->a + tmp.a;
        tmp2.b = this->b + tmp.b;
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
    A obj1(10, 20), obj2(40, 50), obj3;
    obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}