#include <iostream>
using namespace std;

int main()
{
    // Here address of expression cout is gone to function pointer
    // To get the address, we need to add `[]()` before expression aka LAMBDA EXPRESSION
    // LAMBDA EXPRESSION - []() {   cout << "LAMBDA";   };

    void (*fp)() = []()
    { cout << "LAMBDA"; };
    fp();
    return 0;
}