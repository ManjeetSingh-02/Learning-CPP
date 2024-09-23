#include <iostream>
using namespace std;

template <typename T1, typename T2>
class student
{
    T1 id, marks;
    T2 name, college;

public:
    student(T1 i, T2 n, T1 m, T2 c)
    {
        id = i;
        name = n;
        marks = m;
        college = c;
    }
    void get()
    {
        cout << id << endl;
        cout << name << endl;
        cout << marks << endl;
        cout << college << endl;
    }
};

int main()
{
    student<int, string> s1(101, "Raj", 97, "IIM");
    student<int, string> s2(102, "Ram", 90, "IIT");
    s1.get();
    s2.get();
    return 0;
}