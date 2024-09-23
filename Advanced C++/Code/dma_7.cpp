#include <iostream>
using namespace std;

int main()
{
    int *p = NULL;
    int *ptr = NULL;

    cout << "HI" << endl;

    try
    {
        p = new int(25);
        ptr = new int[10];
    }
    catch (bad_alloc &e)
    {
        cout << e.what() << endl;
    }

    cout << "HELLO";

    delete p; // delete single block
    delete[] ptr; // delete set of blocks

    return 0;
}