#include <iostream>
using namespace std;

int main()
{

    int *p = new int();
    *p = 40;
    cout << *p << "  " << p << endl;
    new int(20);
    cout << *p << "  " << p << endl;

    return 0;
}

// 40 and 40