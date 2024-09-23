#include <iostream>
using namespace std;

void logic()
{
    cout << "LOGIC GLOBAL" << endl;
}

class A
{
public:
    void logic()
    {
        cout << "LOGIC CLASS" << endl;
    }
};

int main()
{
    A obj;
    obj.logic();
    logic();
    return 0;
}