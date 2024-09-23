#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    // [&,a] - this means we can read only variable a but can write all variables by reference before lambda expression(a, b)
    // [&,=a] - this gives error

    auto fp = [&,a]()
    {
        // a - read only access
        // b, c - read and write both by reference
        int c = a + b;
        cout << "LAMBDA " << c << endl;
        b = 99;
        c = a + b;
        cout << "LAMBDA " << c << endl;
    };
    fp();
    return 0;
}