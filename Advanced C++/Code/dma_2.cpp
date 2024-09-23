#include <iostream>
using namespace std;

int main()
{
    int *p = new int; // only allocates memory not initialization
    *p = 786;

    cout << *p; // 786

    return 0;
}