#include <iostream>
using namespace std;

int main()
{
    int *p = new int(4); // pointer to single integer
    int *ptr = new int[4]; // pointer to multiple integers in continuous

    delete p;
    delete[] ptr;

    return 0;
}