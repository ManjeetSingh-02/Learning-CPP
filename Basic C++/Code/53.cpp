#include <iostream>
using namespace std;

class D
{
public:
    void logic()
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
    D obj;
    obj.logic();

    C1 obj1;
    obj1.logic();

    C2 obj2;
    obj2.logic();
    return 0;
}