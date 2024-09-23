#include <iostream>
using namespace std;

class Teacher
{
public:
    string name, department, cname, emailid;
    void set(string n, string d, string c, string e)
    {
        name = n;
        department = d;
        cname = c;
        emailid = e;
    }
};

class Math : Teacher
{
    string qualif, expert;
    int salary;

public:
    void set(string n, string d, string c, string e, string q, string ex, int s)
    {
        Teacher::set(n, d, c, e);
        qualif = q;
        expert = ex;
        salary = s;
    }
    void get()
    {
        cout << "Name - " << Teacher::name << endl;
        cout << "Department - " << Teacher::department << endl;
        cout << "College Name - " << Teacher::cname << endl;
        cout << "Mail ID - " << Teacher::emailid << endl;
        cout << "Qualification - " << qualif << endl;
        cout << "Expertise - " << expert << endl;
        cout << "Salary - " << salary << endl;
    }
};

class English : Teacher
{
    string qualif, expert;
    int salary;

public:
    void set(string n, string d, string c, string e, string q, string ex, int s)
    {
        Teacher::set(n, d, c, e);
        qualif = q;
        expert = ex;
        salary = s;
    }
    void get()
    {
        cout << "Name - " << Teacher::name << endl;
        cout << "Department - " << Teacher::department << endl;
        cout << "College Name - " << Teacher::cname << endl;
        cout << "Mail ID - " << Teacher::emailid << endl;
        cout << "Qualification - " << qualif << endl;
        cout << "Expertise - " << expert << endl;
        cout << "Salary - " << salary << endl;
    }
};

class Science : Teacher
{
    string qualif, expert;
    int salary;

public:
    void set(string n, string d, string c, string e, string q, string ex, int s)
    {
        Teacher::set(n, d, c, e);
        qualif = q;
        expert = ex;
        salary = s;
    }
    void get()
    {
        cout << "Name - " << Teacher::name << endl;
        cout << "Department - " << Teacher::department << endl;
        cout << "College Name - " << Teacher::cname << endl;
        cout << "Mail ID - " << Teacher::emailid << endl;
        cout << "Qualification - " << qualif << endl;
        cout << "Expertise - " << expert << endl;
        cout << "Salary - " << salary << endl;
    }
};

int main()
{
    Math m;
    m.set("A", "CS", "MPEC", "A@gmail.com", "M.Tech", "Python", 50000);
    m.get();
    English e;
    e.set("B", "CS", "MPEC", "B@gmail.com", "M.Tech", "Python", 40000);
    e.get();
    Science s;
    s.set("C", "CS", "MPEC", "C@gmail.com", "M.Tech", "Python", 30000);
    s.get();
    return 0;
}