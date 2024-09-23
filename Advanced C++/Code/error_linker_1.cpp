#include <iostream>
using namespace std;

int a; // Now `a` has memory allocated

int main()
{
    extern int a; // Linker Error as `a` don't have any memory allocated
    a = 20;       // Undefined reference to a
    cout << a;
    return 0;
}