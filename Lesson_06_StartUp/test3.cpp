#include <iostream>
using namespace std;

int main () {

    int x,y,sum,addition,multification,divition,mod;

    // Simple Calculator
    cout << "======================================" <<endl;
    cout << "======:-- Simple Calculator (Multification '*')  --:======" <<endl;
    cout << "======================================" <<endl;

    cout << "Enter Number 1: ";
    cin >> x;

    cout << "Enter Number 2: ";
    cin >> y;

    multification = x * y;
    
    cout << "======================================" <<endl;
    cout << "======:-- Multification is " << multification << " --:====== " <<endl;
    cout << "======================================" <<endl;

    return 0;
}