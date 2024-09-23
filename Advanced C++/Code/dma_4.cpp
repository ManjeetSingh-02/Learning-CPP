#include <iostream>
using namespace std;

int main()
{
    int *p = new int(8);
    int *ptr = new int[8];

    cout << p; // 8
    cout << *p; // address of garbagr value
    cout << sizeof(p) << endl; // 4, p hold integer type
    cout << sizeof(ptr) << endl; // 4, ptr hold integer type
    cout << sizeof(*p) << endl; // 4, *p is of integer type
    cout << sizeof(*ptr) << endl; // 4, *ptr is of integer type

    return 0;
}