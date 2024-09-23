#include <iostream>
using namespace std;

class A
{
public:
    virtual void Aicm1() = 0;
    virtual void Aicm2() = 0;
    void Acm()
    {
        cout << "A - Complete" << endl;
    }
};

class B : public A
{
public:
    void Aicm1()
    {
        cout << "A1 - Complete" << endl;
    }
};

class C : public B
{
public:
    void Aicm2()
    {
        cout << "A2 - Complete" << endl;
    }
};

int main()
{
    C obj;
    obj.Acm();
    obj.Aicm1();
    obj.Aicm2();
    return 0;
}