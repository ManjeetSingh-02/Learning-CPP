#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    // [&] - this means we can read and write the variables by reference before lambda expression(a, b)
    // [&a] - this will also gives error because only a is by reference but b is neither by value or reference, we can write it like [&a, &b]
    auto fp = [&]()
    {
        // a, b, c - read and write both by reference
        int c = a + b;
        cout << "LAMBDA " << c << endl;
        a = 99;
        c = a + b;
        cout << "LAMBDA " << c << endl;
    };
    fp();
    return 0;
}