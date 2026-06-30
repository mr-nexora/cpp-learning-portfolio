#include <iostream>
using namespace std;

int main()
{

    // Using a Boolean Variable
    int time = 13;

    bool istTime = time > 18;

    if (istTime)
    {
        cout << "Good DAY!" << endl;
    }
    else
    {
        cout << "Good NIGHT!" << endl;
    }

    return 0;
}