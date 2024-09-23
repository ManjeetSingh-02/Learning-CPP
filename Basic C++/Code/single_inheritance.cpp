#include <iostream>
using namespace std;

// Single
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

int main()
{
    B obj;
    cout << "B can access" << endl;
    obj.printA();
    obj.printB();
    return 0;
}