#include <iostream>
using namespace std;

void logic()
{
    cout << "LOGIC GLOBAL" << endl;
}

class A
{
public:
    void logic()
    {
        cout << "LOGIC CLASS" << endl;
        ::logic();
    }
};

int main()
{
    A obj;
    obj.logic();
    return 0;
}

// if name of class function and global function is same and if we call global function inside the class function then there is a recursive call infinite times because first name of the class function is checked and it will not go to global function

// priority goes to LOCAL function

// by using SRO operator, priority goes to GLOBAL [::function()]