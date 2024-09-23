#include <iostream>
using namespace std;

class A
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void A_set_get()
    {
        a = 5;
        b = 10;
        c = 20;
        cout << a << b << c << endl;
    }
};

class B : public A
{
    // All members of A will be inherited in B
    // `a` -> private section, it will be LOCKED and we cannot access `a`
    // `b` -> protected section
    // `c` -> public section

public:
    void B_set_get()
    {
        // a = 5; Cannot be access as it came from parent class and private data can only be accessed via parent class
        b = 10;
        c = 20;
        cout << b << c << endl;
    }
};

int main()
{
    A obj1;
    obj1.A_set_get();
    
    B obj2;
    obj2.B_set_get();
    return 0;
}