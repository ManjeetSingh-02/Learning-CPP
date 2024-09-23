#include <iostream>
using namespace std;

class Mobile
{
public:
    string brand, color;
    int price, width, height;
    void set(string b, int p, string c, int w, int h)
    {
        brand = b;
        price = p;
        color = c;
        width = w;
        height = h;
    }
};

int main()
{
    Mobile obj[5];
    int y = 0;

    for (int x = 0; x < 5; x++)
    {
        obj[x].set("OnePlus", 1000 * x * x, "Blue", 100, 50);
        if (obj[x].price > 5000)
        {
            y++;
        }

        if (obj[x].price > 1000 && obj[x].price < 100000)
        {
            cout << "Brand - " << obj[x].brand << endl;
            cout << "Price - " << obj[x].price << endl;
            cout << "Color - " << obj[x].color << endl;
        }
    }
    cout << "Total no of mobiles having price more than 5000 are - " << y << endl;

    return 0;
}