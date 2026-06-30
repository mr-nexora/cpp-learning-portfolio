#include <iostream>
using namespace std;

int main () {

// Increment
int x = 5;
int y = 5;

// Pre-Increment (++a)
cout << "Pre-Increment (++x) Value: " << ++x << endl; 
cout << "Now value of x: " << x << endl << endl;

// Post-Increment (y++)
cout << "Post-Increment (y++) value: " << y++ << endl; 
cout << "Now value of y: " << y << endl;

    return 0;
}