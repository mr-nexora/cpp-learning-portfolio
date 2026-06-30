#include <iostream>
using namespace std;

int main()
{
    // Assignment Operators

    // =
    int x = 10;
    cout << "x = " << x << endl; // x = 10

    // +=
    x += 6;                            // x = 10 + 6
    cout << "x += 6 -> " << x << endl; // x = 16

    // -=
    x -= 4;                            // x = 16 - 4
    cout << "x -= 4 -> " << x << endl; // x = 12

    // *=
    x *= 2;                            // x = 12 * 2
    cout << "x *= 2 -> " << x << endl; // x = 24

    // /=
    x /= 3;                            // x = 24 / 3
    cout << "x /= 3 -> " << x << endl; // x = 8

    // %=
    x %= 5;                             // x = 8 % 5
    cout << "x %%= 5 -> " << x << endl; // x = 3

    // Bitwise Assignment Operators
    // &=
    x &= 7;                            // 0011 & 0111
    cout << "x &= 7 -> " << x << endl; // x = 3

    // |=
    x |= 4;                            // 0011 | 0100
    cout << "x |= 4 -> " << x << endl; // x = 7 (Binary: 0111)

    // ^=
    x ^= 2;                            // 0111 ^ 0010
    cout << "x ^= 2 -> " << x << endl; // x = 5 (Binary: 0101)

    // >>=
    x >>= 1;                            // Shifting the value 0101 to the right by 1
    cout << "x >>= 1 -> " << x << endl; // x = 2 (Binary: 0010)

    // <<=
    x <<= 3;                            // Shifting the value 0010 to the left by 3
    cout << "x <<= 3 -> " << x << endl; // x = 16 (Binary: 10000)

    return 0;
}
