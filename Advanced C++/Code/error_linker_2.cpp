#include <iostream>
using namespace std;

class A
{
public:
    int a;
    static int b;
};

int A::b; // Now `b` got memory allocation

int main()
{
    A obj;     // `b` doesn't have memory allocation as it is static
    A::b = 20; // Undefined reference to `b`
    cout << A::b;
    return 0;
}