#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    void set(int x, int y)
    {
        // a = a; then both will be considered as LOCAL variable, compiler won't go to instance variable
        // b = b; then both will be considered as LOCAL variable, compiler won't go to instance variable
        // this->a = a; now LHS(a) will be considered as INSTANCE variable and RHS(a) will be considered as LOCAL variable
        // this->b = b; now LHS(b) will be considered as INSTANCE variable and RHS(b) will be considered as LOCAL variable
        a = x;
        b = y;
    }
    void get()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    A ob1, ob2;
    ob1.set(10, 20); // Set(A * this, int x, int y)
    cout << "OB1 Data :" << endl;
    ob1.get();
    ob2.set(99, 88); // Set(B * this, int x, int y)
    cout << "OB2 Data :" << endl;
    ob2.get();
    return 0;
}