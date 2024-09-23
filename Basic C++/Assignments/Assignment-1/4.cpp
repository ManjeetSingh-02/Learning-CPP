#include <iostream>
using namespace std;

class COMPLEX
{
    int real, img;

public:
    static int tr, ti;
    COMPLEX(int r, int i)
    {
        real = r;
        img = i;
    }
    static void add(COMPLEX &tmp1, COMPLEX &tmp2);
    static void display();
};

int COMPLEX::tr, COMPLEX::ti;
void COMPLEX::add(COMPLEX &tmp1, COMPLEX &tmp2)
{
    tr = tmp1.real + tmp2.real;
    ti = tmp1.img + tmp2.img;
}
void COMPLEX::display()
{
    cout << tr << "+" << ti << "i";
}

int main()
{
    COMPLEX c1(5, 2), c2(6, 3);
    COMPLEX::add(c1, c2);
    COMPLEX::display();
    return 0;
}