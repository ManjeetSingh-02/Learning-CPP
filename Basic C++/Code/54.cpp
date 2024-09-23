#include <iostream>
using namespace std;

class D
{
public:
    virtual void logic()
    {
        cout << "D" << endl;
    }
};

class C1 : public D
{
public:
    void logic()
    {
        cout << "C1" << endl;
    }
};

class C2 : public D
{
public:
    void logic()
    {
        cout << "C2" << endl;
    }
};

int main()
{
    D *dp;
    D obj;
    C1 obj1;
    C2 obj2;

    dp = &obj;
    dp->logic();

    dp = &obj1;
    dp->logic();

    dp = &obj2;
    dp->logic();
    return 0;
}