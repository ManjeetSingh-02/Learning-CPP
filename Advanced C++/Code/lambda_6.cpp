#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    // [=,&a] - this means we can read all variables but only write the variable a by reference before lambda expression(a, b)
    auto fp = [=,&a]()
    {
        // b - read only access
        // a, c - read and write both by reference
        int c = a + b;
        cout << "LAMBDA " << c << endl;
        a = 99;
        c = a + b;
        cout << "LAMBDA " << c << endl;
    };
    fp();
    return 0;
}