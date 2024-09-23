#include <iostream>
using namespace std;

class A // Abstract Class and Incomplete Class
{
public:
    virtual void logic() = 0; // Abstract Function and Incomplete Function

    void mylogic()
    {
        cout << "My Logic" << endl;
    }
};

int main()
{
    // A obj; - Cannot create object of Abstract Class
    A *ptr; // Allowed
    return 0;
}