#include <iostream>
using namespace std;

int main () {

    // Logical and
    int x = 5;

    int p = x > 4 && x <10 ;
    cout << "Output = " << p <<endl; 

    // Logical or
    int q = x > 4 || x <10 ;
    cout << "Output = " << q <<endl; 

    // Logical not
    int r = !(x > 4 && x <10) ;
    cout << "Output = " << r <<endl; 


    return 0;
}