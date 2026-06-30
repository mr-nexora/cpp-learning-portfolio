#include <iostream>
#include <string>
using namespace std;

int main()
{

    // substr()
    string text = "Banana";
    string small = text.substr(2, 4);
    cout << small; // Output: nana

    return 0;
}
