#include <iostream>

int main()
{
    const int age{34};
    int years{3};

    // age = 55; Can't be modified
    years = 5; // Can be modified

    return 0;
}