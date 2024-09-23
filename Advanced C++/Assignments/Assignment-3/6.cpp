#include <iostream>
using namespace std;

class Employee
{
    string Empname;
    int Empcode, Basicsalary;
    static int count;

public:
    Employee(int id, string name, int sal)
    {
        Empcode = id;
        Empname = name;
        Basicsalary = sal;
        count++;
    }
    void get()
    {
        cout << "Count - " << count;
    }
};

int Employee::count = 0;

int main()
{
    Employee obj1(101, "XYZ", 2000);
    Employee obj2(101, "XYZ", 2000);
    Employee obj3(101, "XYZ", 2000);
    Employee obj4(101, "XYZ", 2000);
    Employee obj5(101, "XYZ", 2000);
    obj5.get();
    return 0;
}