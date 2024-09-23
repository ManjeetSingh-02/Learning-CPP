#include <iostream>
using namespace std;

int main()
{
    int *p = new int(2); // allocates memory and initialization in HEAP

    cout << *p; // 2

    return 0;
}