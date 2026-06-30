#include <iostream>
using namespace std;

int main()
{

    // Nested Ternary
    int time = 10;

    string greet = (time >= 18)   ? "Good Night!"
                   : (time >= 12) ? "Good Afternoon!"
                                  : "Good Morning!";

    cout << greet << endl;

    return 0;
}