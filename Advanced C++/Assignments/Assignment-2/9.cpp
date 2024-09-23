#include <iostream>
using namespace std;

class Employee
{
    int Empcode, Basicsalary;

public:
    void set(int id, int sal)
    {
        Empcode = id;
        Basicsalary = sal;
    }

    void get()
    {
        cout << "Emp Code - " << Empcode << endl;
        cout << "Basic Salary - " << Basicsalary << endl;
        netsal();
    }

    void netsal()
    {
        float da, hra, ta, it, netsal;
        da = ((float)Basicsalary / 100) * 174;
        hra = ((float)Basicsalary / 100) * 10;
        ta = 500;

        if (Basicsalary > 50000)
        {
            it = ((float)Basicsalary / 100) * 5;
        }
        else
        {
            it = 0;
        }

        netsal = (Basicsalary + da + hra + ta) - it;
        cout << "Net Salary - "<< netsal << endl;
    }
};

int main()
{
    Employee obj[5];

    for (int x = 0; x < 5; x++)
    {
        obj[x].set(101 + x, 1000 * x);
        obj[x].get();
    }
    return 0;
}