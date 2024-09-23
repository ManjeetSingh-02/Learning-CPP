#include <iostream>
using namespace std;
class B
{
    int a, b;

public:
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
        this->a = tmp.a; // a = tmp.a;
        this->b = tmp.b; // b = tmp.b;
    }
};

int main()
{
    B ob1(11, 22);
    B ob2(ob1);
    ob1.getdata();
    ob2.getdata();
    return 0;
}