#include <iostream>
using namespace std;

int main()
{

    // The else if Statement
    int time = 10;

    if (time >= 18)
    {
        cout << "Good Night!" << endl;
    }
    else if (time >= 12)
    {
        cout << "Good Evening!" << endl;
    }
    else
    {
        cout << "Good Morning!" << endl;
    }

    return 0;
}