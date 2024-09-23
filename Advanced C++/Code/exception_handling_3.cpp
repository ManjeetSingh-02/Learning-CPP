#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;

int main()
{
    int x = 10, y, z;

    cin >> y;
    cout << "Welcome" << endl;
    try
    {
        if (y == 0)
        {
            throw "Divide by zero";
        }
        z = x / y;
        cout << "Result - " << z << endl;
    }
    catch (const char *c)
    {
        cout << "Exception Occurred : " << c << endl;
    }
    cout << "Thanks ||";
    return 0;
}