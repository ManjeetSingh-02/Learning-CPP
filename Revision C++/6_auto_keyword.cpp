#include <iostream>
using namespace std;

int main()
{
    // AUTO ---------> COMPILER DECIDES THE TYPE OF VARIABLE
    auto var1{12};    // 4 bytes
    auto var2{13.0};  // 8 bytes
    auto var3{14.0f}; // 4 bytes
    auto var4{15.0l}; // 16 bytes
    auto var5{'e'};   // 1 byte

    // int modifier suffixes
    auto var6{123u};  // unsigned 4 bytes
    auto var7{123ul}; // unsigned long 4 bytes
    auto var8{123ll}; // long long 8 bytes

    return 0;
}