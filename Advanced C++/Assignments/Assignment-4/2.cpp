#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    int age;
    void set_value(string s, int x)
    {
        name = s;
        age = x;
    }
};

class Zebra : Animal
{
    string origin;

public:
    void set(string n, int x, string o)
    {
        Animal::set_value(n, x);
        origin = o;
    }
    void get()
    {
        cout << "Name - " << Animal::name << endl;
        cout << "Age - " << Animal::age << endl;
        cout << "Origin - " << origin << endl;
    }
};

class Dolphin : Animal
{
    string origin;

public:
    void set(string n, int x, string o)
    {
        Animal::set_value(n, x);
        origin = o;
    }
    void get()
    {
        cout << "Name - " << Animal::name << endl;
        cout << "Age - " << Animal::age << endl;
        cout << "Origin - " << origin << endl;
    }
};

int main()
{
    Zebra z;
    z.set("A", 12, "Earth");
    z.get();
    Dolphin d;
    d.set("B", 20, "Water");
    d.get();
    return 0;
}