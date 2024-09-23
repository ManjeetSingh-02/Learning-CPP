#include <iostream>
#include <string.h>
using namespace std;

class EMPLOYEE
{
    int EMPCODE;
    string EMPNAME;

public:
    void getdata(int code, string name)
    {
        EMPCODE = code;
        EMPNAME = name;
    }
    void display()
    {
        cout << "EMPLOYEE CODE - " << EMPCODE << endl;
        cout << "EMPLOYEE NAME - " << EMPNAME << endl;
    }
};

int main()
{
    EMPLOYEE emp1[6];
    int i;
    for (i = 0; i < 6; i++)
    {
        emp1[i].getdata(1111 + i, "Avinash");
        emp1[i].display();
    }
    return 0;
}