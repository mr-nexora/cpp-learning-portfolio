#include <iostream>
using namespace std;

int main()
{

    // Decrement
    int x = 10;
    int y = 10;

    // Pre-Decrement (--x)
    cout << "Pre-Decrement (--x) value: " << --x << endl;
    cout << "Now x Value: " << x << endl
         << endl;

    // Post-Decrement (y--)
    cout << "Post-Decrement (y--) value: " << y-- << endl;
    cout << "Now y value: " << y << endl;

    return 0;
}