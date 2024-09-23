#include <iostream>
using namespace std;

class A;

class B
{
private:
    int bat;

public:
    void GMethod(A &);
};

class A
{
private:
    int ball;

public:
    friend void B::GMethod(A &);
};

void B::GMethod(A &tmp)
{
    bat = 20;
    cout << tmp.ball + bat;
}

int main()
{
    A obj1;
    B obj2;
    obj2.GMethod(obj1);
    return 0;
}