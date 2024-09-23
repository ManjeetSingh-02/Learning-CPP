#include <iostream>
using namespace std;

class A
{
    int x;

public:
    void set(int tmp)
    {
        x = tmp;
    }

    void get()
    {
        cout << x << endl;
    }
};

int main()
{
    A obj1;
    obj1.set(5);
    obj1.get();

    // A *obj2 = new A; in C++ ============= A *obj2 = new A(); in JAVA
    A *obj2 = new A;
    obj2->set(10);
    obj2->get();
    delete obj2;

    return 0;
}