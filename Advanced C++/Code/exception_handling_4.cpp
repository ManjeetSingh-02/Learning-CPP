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
            throw runtime_error("Divide by zero");
        }
        z = x / y;
        cout << "Result - " << z << endl;
    }
    catch (runtime_error &e)
    {
        cout << "Exception Occurred : " << e.what() << endl;
    }
    cout << "Thanks ||";
    return 0;
}