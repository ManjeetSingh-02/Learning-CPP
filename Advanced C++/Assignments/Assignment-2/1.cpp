#include <iostream>
using namespace std;

class A
{
    string name, city;
    int age, pincode;

public:
    A(string n, int a, string c, int p)
    {
        name = n;
        age = a;
        city = c;
        pincode = p;
    }
    void output()
    {
        cout << "Name - " << name << endl;
        cout << "Age - " << age << endl;
        cout << "City - " << city << endl;
        cout << "Pincode - " << pincode << endl;
    }
};

int main()
{

    A obj("Manjeet", 19, "Kanpur", 208019);
    obj.output();

    return 0;
}
