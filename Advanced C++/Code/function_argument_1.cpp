#include <iostream>
using namespace std;

void logic();
void logic2();
void fun(void (*)()); // declaration of function pointer as argument - void fun(void (*)())

int main()
{
    fun(&logic); // Call by address of function and address of function as argument
    fun(&logic2);
    return 0;
}

void logic() // Normal Function
{
    cout << "LOGIC" << endl;
}

void logic2()
{
    cout << "LOGIC2" << endl;
}

void fun(void (*fp)()) // Function as argument
{
    cout << "FUN" << endl;
    fp(); // Indirect Call
}

// First Fun() is called
// address of Logic() goes to *fp
// fp() is called, so Logic() is called
// OUTPUT - FUN
//          LOGIC
//          FUN
//          LOGIC2