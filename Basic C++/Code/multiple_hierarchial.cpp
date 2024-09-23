#include <iostream>
using namespace std;

// Multiple
class A
{
public:
    void printA()
    {
        cout << "A" << endl;
    }
};
class B
{
public:
    void printB()
    {
        cout << "B" << endl;
    }
};
class C : public B, public A
{
public:
    void printC()
    {
        cout << "C" << endl;
    }
};

int main()
{
    C obj;
    cout << "C can access" << endl;
    obj.printA();
    obj.printB();
    obj.printC();

    return 0;
}