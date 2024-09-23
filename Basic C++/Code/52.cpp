#include <iostream>
using namespace std;

class A
{

public:
    void logic()
    {
        cout << "A" << endl;
    }
};

class B : public A
{
public:
    void logic() // overriding
    {
        A::logic();
        cout << "B" << endl;
    }
};

int main()
{
    B obj2;
    obj2.logic();
    return 0;
}