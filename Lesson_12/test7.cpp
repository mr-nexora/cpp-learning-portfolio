#include <iostream>
using namespace std;

int main()
{

    /* int mark = 60;

    if (mark > 35) {
        cout << "You are PASS" <<endl;
    }
    else {
        cout << "You are Fail" <<endl;
    }
 */

    // C++ Short Hand If Else

    int mark = 60;

    string result = (mark > 35) ? "You are PASS" : "Your are FAIL";
    cout << result << endl;

    // cout << (mark > 35) ? "You are PASS" : "Your are FAIL";

    return 0;
}