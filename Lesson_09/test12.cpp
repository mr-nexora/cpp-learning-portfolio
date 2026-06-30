#include <iostream>
#include <string>
using namespace std;

int main()
{

    // replace()
    string text = "I have a dog";
    text.replace(9, 3, "cat");
    cout << text; // Output: I have a cat

    return 0;
}
