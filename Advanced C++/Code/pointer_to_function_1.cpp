#include <iostream>
using namespace std;

void logic1()
{
    cout << "A";
}

void logic2(int x)
{
    cout << x;
}

int main()
{
    void (*fp1)(); // FUNCTION POINTER WITHOUT HAVING ANY ARGUMENT
    logic1();      // direct calling
    fp1 = logic1;  // fp1 = &logic1;
    fp1();         // indirect calling using function pointer

    void (*fp2)(int); // FUNCTION POINTER HAVING INTEGER ARGUMENT
    logic2(42);       // direct calling
    fp2 = logic2;     // fp2 = &logic2;
    fp2(42);          // indirect calling using function pointer
    return 0;
}