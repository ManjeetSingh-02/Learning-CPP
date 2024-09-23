#include <iostream>
using namespace std;

template <typename T, typename V>
void add(T x, V y)
{
    cout << x + y;
}

int main()
{
    add<int, int>(10, 20);
    add<float, float>(11.1, 22.2);
    return 0;
}