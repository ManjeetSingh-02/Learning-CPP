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

class B : public A
{
public:
    void icm()
    {
        cout << "Incomplete - Complete" << endl;
    }
};

// Now A ----> Abstract
// Now B ----> Concrete

int main()
{
    A *ptr;
    B obj;
    obj.cm();
    obj.icm();
    return 0;
}