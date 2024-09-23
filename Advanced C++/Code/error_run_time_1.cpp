#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    // cout << "HI"); `)` is not needed when using cout
    cout << "HI \n";
    cout << "A \n";
    cout << "B \n";
    cout << "C \n\n";
    // printf("%s", 1.23f); `%s` is not used with float numbers, `%f` is used, after this code will stop execution as runtime error is generated
    printf("%f", 1.23f);
    cout << "D \n";
    cout << "E \n";
    return 0;
}