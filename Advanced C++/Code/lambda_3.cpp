#include <iostream>
using namespace std;

int main()
{
    // void (*fp)() = []() {};
    int a = 22;
    auto fp = []()
    {
        // cout << a; This gives error as nothing is captured in Capture List
        cout << "LAMBDA";
    }; // It automatically detecs it's function pointer
    fp();
    return 0;
}