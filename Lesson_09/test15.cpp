#include <iostream>
#include <string>
using namespace std;

int main()
{

    // C++ User Input Strings
    // string fullName;

    // cout << "Enter your Full Name: ";
    // cin >> fullName;

    // cout << "Your name is: " << fullName;

    // Enter Full Name = John Doe
    // Your name is: John


    // Fix this
    string fullName;

    cout << "Enter your Full Name: ";
    getline(cin,fullName);

    cout << "Your name is: " << fullName;

    // Enter Full Name = John Doe
    // Your name is: John Doe

    return 0;
}
