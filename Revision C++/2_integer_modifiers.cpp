#include <iostream>
using namespace std;

int main()
{
    // ====================================
    // SIGNED INT == INT
    // Both +ve and -ve numbers are allowed
    // ====================================
    // ====================================
    // UNSIGNED INT != INT
    // Only +ve numbers are allowed
    // ====================================

    short short_var{-32768};                    // 2 Bytes
    short int short_int{455};                   // 2 Bytes
    signed short signed_short{122};             // 2 Bytes
    signed short int signed_short_int{-456};    // 2 Bytes
    unsigned short int unsigned_short_int{456}; // 2 Bytes

    int int_var{55};               // 4 bytes
    signed signed_var{66};         // 4 Bytes
    signed int signed_int{77};     // 4 Bytes
    unsigned int unsigned_int{77}; // 4 Bytes

    long long_var{88};                       // 4 OR 8 Bytes
    long int long_int{33};                   // 4 Bytes
    signed long signed_long{44};             // 4 Bytes
    signed long int signed_long_int{44};     // 4 Bytes
    unsigned long int unsigned_long_int{44}; // 4 Bytes

    long long long_long{888};                            // 8 Bytes
    long long int long_long_int{999};                    // 8 Bytes
    signed long long signed_long_long{444};              // 8 Bytes
    signed long long int signed_long_long_int{1234};     // 8 Bytes
    unsigned long long int unsigned_long_long_int{1234}; // 8 Bytes

    return 0;
}