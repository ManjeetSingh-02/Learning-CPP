#include <iostream>
using namespace std;

int main()
{

    int *p = new int();
    *p = 40;
    cout << *p << "  " << p << endl;
    delete p;
    new int(20);
    cout << *p << "  " << p << endl;

    return 0;
}

// DELETE - Free for reallocation
// OUTPUT - 40 and garbage value, it can return previous memory value also as it can be re-allocated