#include <iostream>
#include <string>
using namespace std;

int main()
{

    // compare()
    string str1 = "Apple";
    string str2 = "Apple";

    if (str1.compare(str2) == 0)
    {
        std::cout << "Both strings match"; // This will print
    }

    return 0;
}
