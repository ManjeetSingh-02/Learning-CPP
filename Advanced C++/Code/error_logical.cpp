#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a;
    cin >> b;
    // cout << a + c << endl; It will give logical error as developer write `c` instead of `b` and it's logical fault
    cout << a + b << endl;
    return 0;
}