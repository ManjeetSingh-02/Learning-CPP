#include <iostream>
using namespace std;

template <class T>
class A
{
public:
    T data;
    A(T d)
    {
        data = d;
        cout << d;
    }
};

int main()
{
    A<string> obj("Hello");
    return 0;
}