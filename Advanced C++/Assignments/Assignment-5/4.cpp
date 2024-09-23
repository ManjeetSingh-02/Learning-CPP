#include <iostream>
using namespace std;

class Unit_Test
{

public:
    int tmark;
    Unit_Test()
    {
    }
    Unit_Test(int m)
    {
        tmark = m;
    }
};

class Practical
{

public:
    int pmark;
    Practical()
    {
    }
    Practical(int m)
    {
        pmark = m;
    }
    Practical operator*(Unit_Test tmp)
    {
        Practical tmp2;
        tmp2.pmark = this->pmark * tmp.tmark;
        return tmp2;
    }
};

int main()
{
    Unit_Test u(10);
    Practical p(20);
    Practical result;

    result = p * u;
    cout << result.pmark;
    
    return 0;
}