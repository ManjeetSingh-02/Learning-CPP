#include <iostream>
using namespace std;

class A
{
    int a;
    int b;

public:
    A()
    {
    }
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    void operator++() // pre-increment
    {
        this->a = this->a + 1;
        this->b = this->b + 1;
    }
    void operator++(int) // post-increment
    {
        this->a = this->a + 1;
        this->b = this->b + 1;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    A obj1(10, 20);
    obj1.display();
    ++obj1;
    obj1.display();
    obj1++;
    obj1.display();
    return 0;
}