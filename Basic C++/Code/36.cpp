#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "A Class Constructor";
    }
};

class B
{
public:
    B()
    {
        cout << "B Class Constructor";
    }
};

int main()
{

    A ob1;
    B ob2;
    return 0;
}