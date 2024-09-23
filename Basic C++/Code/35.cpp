#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        printf("\n This is constructor");
    }
    ~A()
    {
        printf("\n This is destructor");
    }
};

int main()
{
    // Implicit Call
    A obj;
    cout << "\nHI";
    A obj2;
    {
        A obj3, obj4;
        cout << "\nTHERE";
        A obj5;
    }
    cout << "\nGOOD";
    return 0;
}

// this is constructor
// HI
// this is constructor
// this is constructor
// this is constructor
// THERE
// this is constructor
// this is destructor
// this is destructor
// this is destructor
// GOOD
// this is destructor
// this is destructor