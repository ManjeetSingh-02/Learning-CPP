#include <iostream>
using namespace std;

// Hierarchial
class A
{
public:
    void printA()
    {
        cout << "A" << endl;
    }
};
class B : public A
{
public:
    void printB()
    {
        cout << "B" << endl;
    }
};
class C : public A
{
public:
    void printC()
    {
        cout << "C" << endl;
    }
};

int main()
{
    B obj1;
    cout << "B can access" << endl;
    obj1.printA();
    obj1.printB();
    C obj2;
    cout << "C can access" << endl;
    obj2.printA();
    obj2.printC();
    return 0;
}