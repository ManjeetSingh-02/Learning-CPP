#include <iostream>
using namespace std;

class B
{
private:
    int bat = 2000;
    friend void GMethod();
};

class A
{
    int ball;
    friend void GMethod();
};

void GMethod()
{
    A obj1;
    B obj2;
    obj1.ball = 100;
    obj2.bat = 2000;
    cout << obj1.ball + obj2.bat;
}

int main()
{
    GMethod();
    return 0;
}