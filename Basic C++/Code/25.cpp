#include <iostream>
using namespace std;
// Pass object as an argument inside constructor
class A
{
public:
    int a;
};

class B
{
public:
    B(A tmp)
    {
        tmp.a = 88;
        cout << "a = " << tmp.a << endl;
    }
};

int main()
{
    A obj;
    obj.a = 66;
    B ob(obj);
    return 0;
}