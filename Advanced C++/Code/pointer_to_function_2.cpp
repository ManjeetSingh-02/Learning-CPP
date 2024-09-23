#include <iostream>
using namespace std;

void logic(int a, int b)
{
    cout << a + b;
}

int main()
{
    void (*fp)(int, int);
    fp = logic;
    fp(10, 20);
}