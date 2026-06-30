#include <iostream>
using namespace std;

int main()
{

    // Resetting Back With noboolalpha

    bool isStudent = true;

    cout << boolalpha;         // print as true/false
    cout << isStudent << endl; // Outputs true

    cout << noboolalpha;       // reset cout back to printing 1/0
    cout << isStudent << endl; // Outputs 1

    return 0;
}
