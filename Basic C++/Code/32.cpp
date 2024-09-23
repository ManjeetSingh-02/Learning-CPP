#include <iostream>
using namespace std;

class C
{
    int a, b;

public:
    C()
    {
    }
    C(int x, int y)
    {
        a = x;
        b = y;
    }
    static C add(C tmp1, C tmp2)
    {
        C tmp3;
        tmp3.a = tmp1.a + tmp2.a;
        tmp3.b = tmp1.b + tmp2.b;
        return tmp3;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    C ob1(10, 20);
    C ob2(11, 22);
    C ob3 = C::add(ob1, ob2); // static
    cout << "OB1 DATA\n";
    ob1.display();
    cout << "OB2 DATA\n";
    ob2.display();
    cout << "OB3 DATA\n";
    ob3.display();

    return 0;
}