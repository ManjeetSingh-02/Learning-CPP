#include <iostream>
using namespace std;

class Student
{
    string name;
    int Roll_no, mark1, mark2, mark3, mark4, mark5;
    float result;

    void calc()
    {
        result = ((mark1 + mark2 + mark3 + mark4 + mark5) / (float)500) * 100;
    }

public:
    float percent;
    void set(int id, string n, int m1, int m2, int m3, int m4, int m5)
    {
        Roll_no = id;
        name = n;
        mark1 = m1;
        mark2 = m2;
        mark3 = m3;
        mark4 = m4;
        mark5 = m5;
        calc();
        percent = result;
    }

    void get()
    {
        cout << "Roll No - " << Roll_no << endl;
        cout << "Name - " << name << endl;
        cout << "Percentage - " << percent << endl;
    }
};

int main()
{
    Student s1[5];
    float p = 0;
    int h = 0;

    for (int x = 0; x < 5; x++)
    {
        s1[x].set(101 + x, "A", 10, 20, 30, 40 + x, 50);

        if (s1[x].percent > p)
        {
            p = s1[x].percent;
            h = x;
        }
    }

    s1[h].get();
    return 0;
}