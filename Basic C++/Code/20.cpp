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
        A obj3;
        cout << "\nTHERE";
    }
    cout << "\nGOOD";
    return 0;
}

// this is constructor
// HI
// this is constructor
// this is constructor
// THERE
// this is destructor
// GOOD
// this is destructor
// this is destructor