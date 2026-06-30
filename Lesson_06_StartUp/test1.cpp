#include <iostream>
using namespace std;

int main () {

    int x,y,sum,addition,multification,divition,mod;

    // Simple Calculator
    cout << "======================================" <<endl;
    cout << "======:-- Simple Calculator (Addition '+')  --:======" <<endl;
    cout << "======================================" <<endl;

    cout << "Enter Number 1: ";
    cin >> x;

    cout << "Enter Number 2: ";
    cin >> y;

    sum = x + y;
    
    cout << "======================================" <<endl;
    cout << "======:-- Sum is " << sum << " --:====== " <<endl;
    cout << "======================================" <<endl;

    return 0;
}