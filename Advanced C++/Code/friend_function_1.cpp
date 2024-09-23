#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    friend void GMethod();
};

void GMethod()
{
    A tmp;
    tmp.a = 10;
    cout << tmp.a;
}

int main()
{
    GMethod();
    return 0;
}