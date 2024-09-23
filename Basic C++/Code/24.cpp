#include <iostream>
using namespace std;
// Pass object as an argument
class A
{
public:
    int a;
};

class B
{
public:
    void logic(A tmp)
    {
        tmp.a = 88;
        cout << "a = " << tmp.a << endl;
    }
};

int main()
{
    A obj;
    obj.a = 66;
    B ob;
    ob.logic(obj);
    return 0;
}