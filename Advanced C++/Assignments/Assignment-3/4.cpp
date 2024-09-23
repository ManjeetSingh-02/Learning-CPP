#include <iostream>
using namespace std;

class Mobile
{
    string brand, color;
    int price, width, height;

public:
    Mobile(string b, int p, string c, int w, int h)
    {
        brand = b;
        price = p;
        color = c;
        width = w;
        height = h;
    }
    void get()
    {
        cout << "Brand - " << brand << endl;
        cout << "Price - " << price << endl;
        cout << "Color - " << color << endl;
        cout << "Width - " << width << endl;
        cout << "Height - " << height << endl;
    }
};

int main()
{
    Mobile obj("OnePlus", 10000, "Blue", 100, 50);
    obj.get();
    return 0;
}