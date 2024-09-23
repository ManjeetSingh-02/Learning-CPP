#include <iostream>
using namespace std;

class B
{
private:
    int bat = 2000;

public:
    void GMethod();
};

class A
{
    int ball;

public:
    friend void B::GMethod();
};

void B::GMethod()
{
    A tmp;
    cout << tmp.ball + bat;
}

int main()
{
    B obj2;
    obj2.GMethod();
    return 0;
}