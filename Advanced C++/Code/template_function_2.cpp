#include <iostream>
using namespace std;

template <typename T> // Template for display(), T is for display()
void display(T x)     // Template function should be written just above the function
{
    cout << x;
}

template <typename T, typename V> // Template for add(), T and V are for add()
void add(T x, V y)                // Template function should be written just above the function
{
    cout << x + y;
}

int main()
{
    display<int>(10);
    add<float, float>(11.1, 22.2);
    return 0;
}