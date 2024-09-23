#include <iostream>
using namespace std;
class A
{
public:
    int a;
};

class B
{
    int b;

public:
    B(int x)
    {
        b = x;
    }
    // B(B tmp) copy constructor for class "B" may not have a parameter of type "B" => cannot create object of same class in the constructor but we can create reference object instead of making a object
    B(B &tmp) // B &tmp is a reference object and works as a copy constructor
    {
        b = tmp.b;
        cout << "b = " << tmp.b << endl;
    }
};

int main()
{
    B ob1(11);
    B ob2(ob1);
    return 0;
}