#include <iostream>
using namespace std;

int main()
{
    char *p = new char(10);
    char *ptr = new char[10];

    cout << sizeof(p) << endl; // 4, p has value of int
    cout << sizeof(ptr) << endl; // 4 ptr has value of int
    cout << sizeof(*p) << endl; // 1, *p is of type char
    cout << sizeof(*ptr) << endl; // 1, *ptr is of type char

    return 0;
}