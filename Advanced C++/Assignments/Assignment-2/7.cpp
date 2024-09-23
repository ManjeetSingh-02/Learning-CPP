#include <iostream>
using namespace std;

class Student
{
    int Student_id, Sub1_mark, Sub2_mark, Sub3_mark, Sub4_mark, Sub5_mark;
    float percent;
    string Name, Branch;

public:
    void set(int id, string n, string b, int m1, int m2, int m3, int m4, int m5)
    {
        Student_id = id;
        Name = n;
        Branch = b;
        Sub1_mark = m1;
        Sub2_mark = m2;
        Sub3_mark = m3;
        Sub4_mark = m4;
        Sub5_mark = m5;
    }
    void getpercent()
    {
        percent = ((Sub1_mark + Sub2_mark + Sub3_mark + Sub4_mark + Sub5_mark) / (float)500) * 100;
        cout << "Percent - " << percent << endl;
    }
    void getclass()
    {
        if (percent > 90)
        {
            cout << "First";
        }
        else if (percent < 90 && percent > 80)
        {
            cout << "Second";
        }
        else if (percent < 80 && percent > 70)
        {
            cout << "Third";
        }
        else
        {
            cout << "Pass";
        }
    }
};

int main()
{
    Student obj;
    obj.set(101, "Manjeet", "CSE", 90, 85, 75, 80, 95);
    obj.getpercent();
    obj.getclass();
    return 0;
}