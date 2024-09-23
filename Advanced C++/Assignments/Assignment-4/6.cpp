#include <iostream>
using namespace std;

class Person
{
public:
    string name, cname;

    void pset(string n, string cn)
    {
        name = n;
        cname = cn;
    }
};

class Student : Person
{
public:
    int sid, mark_1, mark_2, mark_3, mark_4, mark_5;

    void sset(string n, string cn, int s, int m1, int m2, int m3, int m4, int m5)
    {
        Person::pset(n, cn);
        sid = s;
        mark_1 = m1;
        mark_2 = m2;
        mark_3 = m3;
        mark_4 = m4;
        mark_5 = m5;
    }

    void showResult()
    {
        int total = mark_1 + mark_2 + mark_3 + mark_4 + mark_5;
        int percent = (total / (float)500) * 100;
        cout << "Student Total - " << total << endl;
        cout << "Student Percentage - " << percent << endl;

        if (percent > 90)
        {
            cout << "Student Rank - First" << endl;
        }
        else if (percent > 80 && percent < 90)
        {
            cout << "Student Rank - Second" << endl;
        }
        else if (percent > 70 && percent < 80)
        {
            cout << "Student Rank - Third" << endl;
        }
        else if (percent > 60 && percent < 70)
        {
            cout << "Student Rank - Pass" << endl;
        }
    }

    void sget()
    {
        cout << "Student Name - " << Person::name << endl;
        cout << "Student College Name - " << Person::cname << endl;
        cout << "Student ID - " << sid << endl;
        showResult();
    }
};

class Employee : Person
{
public:
    int Empcode, Basicsalary;
    string qualification;

    void eset(string n, string cn, int id, string q, int sal)
    {
        Person::pset(n, cn);
        Empcode = id;
        qualification = q;
        Basicsalary = sal;
    }

    void netsal()
    {
        float da, hra, ta, it, netsal;
        da = ((float)Basicsalary / 100) * 189;
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

        cout << "Employee Net Salary - " << netsal << endl;
    }

    void eget()
    {
        cout << "Employee Name - " << Person::name << endl;
        cout << "Employee College Name - " << Person::cname << endl;
        cout << "Employee ID - " << Empcode << endl;
        cout << "Employee ID - " << qualification << endl;
        cout << "Employee Basic Salary - " << Basicsalary << endl;
        netsal();
    }
};

int main()
{
    Student s;
    s.sset("A", "MPEC", 101, 90, 80, 70, 60, 50);
    s.sget();
    Employee e;
    e.eset("A", "MPEC", 111, "B.Tech", 80000);
    e.eget();
    return 0;
}