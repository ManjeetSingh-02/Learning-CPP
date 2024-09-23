#include <iostream>
using namespace std;

class A
{
    int x, y, z;

public:
    A()
    {
    }
    A(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    A operator--()
    {
        this->x = this->x - 1;
        this->y = this->y - 1;
        this->z = this->z - 1;
    }
    void get()
    {
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    }
};

int main()
{
    A obj(10, 20, -30);
    --obj;
    obj.get();
}