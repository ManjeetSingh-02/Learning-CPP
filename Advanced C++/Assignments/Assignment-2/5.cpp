#include <iostream>
using namespace std;

class Student
{
    int Studid, sem;
    string name, branch;

public:
    void set(int id, string n, int s, string b)
    {
        Studid = id;
        name = n;
        sem = s;
        branch = b;
    }
    void get()
    {
        cout << "Id - " << Studid << endl;
        cout << "Name - " << name << endl;
        cout << "Sem - " << sem << endl;
        cout << "Branch - " << branch << endl;
    }
};

int main()
{
    Student obj;
    obj.set(101, "Manjeet", 6, "CSE");
    obj.get();
    return 0;
}