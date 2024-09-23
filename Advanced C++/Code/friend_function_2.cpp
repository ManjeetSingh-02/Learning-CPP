#include <iostream>
using namespace std;

class A
{
private:
    int a;
    friend void GMethod();
};

void GMethod()
{
    A tmp;
    tmp.a = 10;
    int b = 20;
    int c = tmp.a + b;
    cout << c;
}

int main()
{
    GMethod();
    return 0;
}