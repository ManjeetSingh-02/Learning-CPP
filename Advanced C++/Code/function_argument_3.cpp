#include <iostream>
using namespace std;

void sort(int);
void incre();
void decre();
void mysorting(void (*)(int), void (*)());

int main()
{
    mysorting(&sort, &incre);
    mysorting(&sort, &decre);
    return 0;
}

void sort(int x)
{
    int i, j, arr[4] = {9, 4, 10, 16};
    if (x == 0)
    {
        for (i = 0; i < 4; i++)
        {
            for (j = i + 1; j < 4; j++)
            {
                if (arr[i] > arr[j])
                {
                    int t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }
            }
        }
    }
    else
    {
        for (i = 0; i < 4; i++)
        {
            for (j = i + 1; j < 4; j++)
            {
                if (arr[i] < arr[j])
                {
                    int t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }
            }
        }
    }

    for (i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }
}

void incre()
{
}

void decre()
{
}

void mysorting(void (*fp1)(int), void (*fp2)())
{
    if (fp2 == &incre)
    {
        fp1(0);
    }
    else
    {
        fp1(1);
    }
}