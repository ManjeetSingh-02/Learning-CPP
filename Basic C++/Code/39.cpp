#include <iostream>
using namespace std;

class A
{
public:
    void Alogic()
    {
        cout << "\n A class logic";
    }
};

class B
{
    A obj; // Aggregation - If one class has object of another class

public:
    void Blogic()
    {
        cout << "\n B class logic";
        obj.Alogic();
    }
};

int main()
{

    B obj;
    obj.Blogic();

    return 0;
}