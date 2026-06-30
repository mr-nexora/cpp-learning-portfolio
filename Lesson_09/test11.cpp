#include <iostream>
#include <string>
using namespace std;

int main()
{

    // erase()
    string text = "ABC123XYZ";
    text.erase(3, 3); // Removes "123"
    cout << text;     // Output: ABCXYZ

    return 0;
}
