#include <iostream>
using namespace std;

// Hybrid
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
class C : public A, public B // Multiple
{
public:
    void printC()
    {
        cout << "C" << endl;
    }
};

class D : public B // Multi Level
{
public:
    void printD()
    {
        cout << "D" << endl;
    }
};

class E : public D // Multi Level
{
public:
    void printE()
    {
        cout << "E" << endl;
    }
};

int main()
{
    cout << "Hybrid - Multiple" << endl;
    C obj1;
    cout << "C can access" << endl;
    obj1.printA();
    obj1.printB();
    obj1.printC();
    cout << "Hybrid - Multi Level" << endl;
    D obj2;
    cout << "D can access" << endl;
    obj2.printB();
    obj2.printD();
    E obj3;
    cout << "E can access" << endl;
    obj3.printB();
    obj3.printD();
    obj3.printE();
    return 0;
}