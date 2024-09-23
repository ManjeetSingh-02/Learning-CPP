#include <iostream>
using namespace std;

void logic()
{
    cout << "LOGIC";
}

int main()
{
    void (*fp1)() = &logic; // Function Pointer pointing to function
    void (*fp2)() = []()
    { cout << "LAMBDA"; }; // Function Pointer pointing to lambda expression
    fp1();
    fp2();
    return 0;
}