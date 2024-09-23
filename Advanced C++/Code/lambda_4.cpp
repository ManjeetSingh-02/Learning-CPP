#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    // [=] - this means we can read the variables before lambda expression(a, b)
    // [=a,=b] this also gives error because it is same as [=]
    auto fp = [=]()
    {
        // a, b - only read value
        int c = a + b; // c - read and write
        cout << "LAMBDA " << c;
        // a = 99; It gives error because we can't write the value of any variable written before lambda expression
    };
    fp();
    return 0;
}