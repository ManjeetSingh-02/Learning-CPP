#include <iostream>
using namespace std;

int main()
{
    // a has 10 with read and write access and b has 20 with read access
    auto fp = [](int &a, int b)
    {
        int c = a + b;
        cout << "LAMBDA " << c << endl;
        a = 99;
        c = a + b;
        cout << "LAMBDA " << c << endl;
    };
    int a = 10, b = 20;
    fp(a, b);
    return 0;
}