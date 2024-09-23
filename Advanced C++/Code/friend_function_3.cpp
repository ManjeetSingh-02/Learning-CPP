#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    A()
    {
        a = 10;
    }
    friend void GMethod(A &);
};

void GMethod(A &tmp)
{
    int b = 20;
    int c = tmp.a + b;
    cout << c;
}

int main()
{
    A obj;
    GMethod(obj);
    return 0;
}