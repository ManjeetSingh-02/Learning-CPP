#include <iostream>

int main()
{
    // Less than 4 bytes, can't do airthmetic operations. So compilers will automatically convert into `int` to perform airthmetic operations
    short int var1{10};         // 2 bytes
    short int var2{20};         // 2 bytes
    char var3{40};              // 1 byte
    char var4{50};              // 1 byte
    auto result1 = var1 + var2; // 4 bytes
    auto result2 = var3 + var4; // 4 bytes

    return 0;
}