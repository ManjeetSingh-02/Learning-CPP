#include <iostream>
using namespace std;

int main()
{
    // Literal types : u and l combinations for unsigned and long.

    // 2 Bytes
    short short_var{-32768};
    short int short_int{455};
    signed short signed_short{122};
    signed short int signed_short_int{-456};
    unsigned short int unsigned_short_int{5678U};

    // 4 Bytes
    const int int_var{55};
    signed signed_var{66};
    signed int signed_int{77};
    unsigned int unsigned_int{555U};

    // 4 or 8 Bytes
    long long_var{88L};
    long int long_int{33L};
    signed long signed_long{44l};
    signed long int signed_long_int{44l};
    unsigned long int unsigned_long_int{555ul};

    // 8 Bytes
    long long long_long{888ll};
    long long int long_long_int{999ll};
    signed long long signed_long_long{444ll};
    signed long long int signed_long_long_int{1234ll};

    // Grouping Numbers : C++14 and onwards
    unsigned int prize{1'500'00'0u};
    cout << prize << endl; // 1500000

    // With number systems - Hex : prefix with 0x
    unsigned int hex_number{0x22BU}; // 22b and Dec 555
    int hex_number2{0x400};          // 1024 and Dec 1024

    // Representing colors with hex
    int black_color{0xffffff}; // 16777215

    // Octal literals : prefix with 0
    int octal_number{0777u}; // 511 and 511 Dec
    int error_octal{055};    // This is not 55 in memory , it is 45 dec

    // Binary literals
    unsigned int binary_literal{0b11111111u}; // 255 dec
    char char_literal{'c'};                   // c
    int number_literal{15};                   // 15
    float fractional_literal{1.5f};           // 1.5
    string string_literal{"Hit the road"};    // Hit the road

    return 0;
}