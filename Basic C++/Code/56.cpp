#include <iostream>
using namespace std;

class A
{
public:
    virtual void icm() = 0;

    void cm()
    {
        cout << "Complete" << endl;
    }
};

class B : public A // Due to A, B also becomes Abstract Class
{
};

int main()
{
    A *ptr;
    // B obj ------> Cannot create object of B class
    return 0;
}