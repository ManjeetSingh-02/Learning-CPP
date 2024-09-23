#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    void get()
    {
        // Default constructor created named as A to allocate garbage values
        cout << "\na = " << a << endl;
        cout << "\nb = " << b << endl;
    }
};

int main()
{
    A obj;
    obj.get();
    return 0;
}