#include <iostream>
using namespace std;
// Create object of one class into another class
class A
{
public:
    int a;
};

class B
{
public:
    void logic()
    {
        A obj;
        obj.a = 88;
        cout << "a = " << obj.a << endl;
    }
};

int main()
{
    B ob;
    ob.logic();
    return 0;
}