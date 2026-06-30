#include <iostream>
using namespace std;

int main()
{

    // Printing true/false With boolalpha
    
    bool isStudent = true;
    bool isStudyMaths = false;

    cout << boolalpha; // enable printing "true"/"false"

    cout << isStudent << endl;    // Outputs true
    cout << isStudyMaths << endl; // Outputs false

    return 0;
}
