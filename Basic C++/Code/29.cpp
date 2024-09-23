#include <iostream>
using namespace std;
class B
{
    int a, b;

public:
    B()
    {
    }
    B(int x, int y)
    {
        a = x;
        b = y;
    }
    void getdata()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    B(B &tmp)
    {
        this->a = tmp.a;
        this->b = tmp.b;
    }
};

int main()
{
    B ob1(11, 22);
    ob1.getdata();
    // B ob2(ob1);
    B ob2 = ob1;
    B ob3;
    ob3 = ob1; // assignment operator overloading =
    ob2.getdata();
    ob3.getdata();
    return 0;
}