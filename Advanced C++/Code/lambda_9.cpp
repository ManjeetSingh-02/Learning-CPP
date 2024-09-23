#include <iostream>
using namespace std;

int main()
{
    // [=] this will access m,n as read only and () this will access x=a,z as read and write both,y=b as read only, as parameters
    int m = 1, n = 2;
    auto fp = [=](int x, int y, int &z)
    {
        z = x + y + m + n;
    };
    int a = 10, b = 20, c = 0;
    cout << "LAMBDA " << c << endl;
    fp(a, b, c);
    cout << "LAMBDA " << c << endl;
    return 0;
}