#include <iostream>
using namespace std;

int add(int, int);
int sub(int, int);
void calc(int (*)(int, int), int (*)(int, int));

int main()
{
    calc(&add, &sub);
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

void calc(int (*fp1)(int, int), int (*fp2)(int, int))
{
    cout << "ADD - " << fp1(5, 3) << endl;
    cout << "SUB - " << fp2(5, 3) << endl;
}