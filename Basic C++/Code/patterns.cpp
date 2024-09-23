#include <bits/stdc++.h>
using namespace std;

void f1(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void f2(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void f3(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void f4(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void f5(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}

void f6(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void f7(int n)
{
    int i, j, k, l;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (k = 0; k < (2 * i) + 1; k++)
        {
            cout << "*";
        }
        for (l = 0; l < n - i - 1; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void f8(int n)
{
    int i, j, k, l;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (k = 0; k < (2 * n) - (2 * i + 1); k++)
        {
            cout << "*";
        }
        for (l = 0; l < i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void f9(int n)
{
    f7(n);
    f8(n);
}

void f10(int n)
{
    int i, j;

    for (i = 0; i < (2 * n) - 1; i++)
    {
        int stars = i;

        if (i > n)
        {
            stars = 2 * n - i;
        }

        for (j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void f11(int n)
{
    int i, j, bit = 1;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            bit = 1;
        }
        else
        {
            bit = 0;
        }

        for (j = 0; j <= i; j++)
        {
            cout << bit << " ";
            bit = 1 - bit;
        }
        cout << endl;
    }
    cout << endl;
}

void f12(int n)
{
    int i, j, k, l, space = (2 * n) - 2;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        for (k = 0; k < space; k++)
        {
            cout << " ";
        }
        for (l = i; l >= 0; l--)
        {
            cout << l + 1;
        }
        cout << endl;
        space = space - 2;
    }
    cout << endl;
}

void f13(int n)
{
    int i, j, num = 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
    cout << endl;
}

void f14(int n)
{
    int i, j, start = 'A';

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << (char)(start + j);
        }
        cout << endl;
    }
    cout << endl;
}

void f15(int n)
{
    int i, j, start = 'A';

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << (char)(start + j);
        }
        cout << endl;
    }
    cout << endl;
}

void f16(int n)
{
    int i, j, start = 'A';

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << (char)(start + i);
        }
        cout << endl;
    }
    cout << endl;
}

void f17(int n)
{
    int i, j, k, l;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        int start = 'A', breakpoint = ((2 * i) + 1) / 2;
        for (k = 0; k < (2 * i) + 1; k++)
        {
            cout << (char)start;
            if (k < breakpoint)
            {
                start++;
            }
            else
            {
                start--;
            }
        }
        for (l = 0; l < n - i - 1; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void f18(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}

void f19(int n)
{
    int spaces = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < spaces; k++)
        {
            cout << " ";
        }
        for (int l = 0; l < n - i; l++)
        {
            cout << "*";
        }
        cout << endl;
        spaces += 2;
    }

    spaces = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 0; k < spaces; k++)
        {
            cout << " ";
        }
        for (int l = 0; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
        spaces -= 2;
    }
    cout << endl;
}

// void f20(int n)
// {
//     int spaces = 2 * n - 2;
//     for (int i = 0; i < 2 * n; i++)
//     {
//         int stars = i;
//         if (i > n)
//         {
//             stars = 2 * n - i;
//         }
//         for (int j = 0; j <= stars; j++)
//         {
//             cout << "*";
//         }
//         for (int k = 0; k <= stars; k++)
//         {
//             cout << " ";
//         }
//         for (int l = 0; l <= stars; l++)
//         {
//             cout << "*";
//         }
//         if (i < n)
//         {
//             spaces -= 2;
//         }
//         else
//         {
//             spaces += 2;
//         }
//         cout << endl;
//     }
// }

void f21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void f22(int n)
{
}

int main()
{
    int n = 5;
    f22(n);

    return 0;
}