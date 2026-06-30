#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // Rounding & Estimation

    // round: Rounds to the nearest whole number
    cout << "round value: " << round(4.6) << endl; // Output: 5
    cout << "round value: " << round(4.3);         // Output: 4

   // ceil: Always rounds upwards to the next integer
    cout << "ceil value: " << ceil(4.1); // Output: 5

    // floor: Always rounds downwards to the previous integer
    cout << "floor value: " << floor(4.9); // Output: 4

    return 0;
}
