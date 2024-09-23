#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;

int main()
{
    try
    {
        throw "Some Exception";
        throw 10;
        throw runtime_error("RUNTIME ERROR");
    }
    catch (const char *c)
    {
        cout << "Exception Occurred String : " << c << endl;
    }
    catch (int i)
    {
        cout << "Exception Occurred Integer : " << i << endl;
    }
    catch (runtime_error &e)
    {
        cout << "Exception Occurred Runtime : " << e.what() << endl;
    }
    cout << "Thanks ||";
    return 0;
}