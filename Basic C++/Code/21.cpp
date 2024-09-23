#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A()
    {
        printf("\n No ARGUMENT CONSTRUCTOR");
        cout << "\na = " << a << endl;
        cout << "\nb = " << b << endl;
    }
    A(int x)
    {
        printf("\n One ARGUMENT CONSTRUCTOR");
        a = x;
        cout << "\na = " << a << endl;
        cout << "\nb = " << b << endl;
    }
    A(int x, int y)
    {
        printf("\n Two ARGUMENT CONSTRUCTOR");
        a = x;
        b = y;
        cout << "\na = " << a << endl;
        cout << "\nb = " << b << endl;
    }
};

int main()
{
    // Explicit Call
    A obj;
    A obj2(10);
    A obj3(10, 20);
    return 0;
}