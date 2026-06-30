#include <iostream>
using namespace std;

int main()
{

    // Using a Boolean Variable
    int x = 15, y = 25;
    bool isGreater = x < y;

    if (isGreater)
    {
        cout << x << " is greater than " << y << endl;
    }

    return 0;
}