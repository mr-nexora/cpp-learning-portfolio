#include <iostream>
using namespace std;

int main () {

    int x,y,sum,addition,multification,divition,mod;

    // Simple Calculator
    cout << "======================================" <<endl;
    cout << "======:-- Simple Calculator (Subtraction '-')  --:======" <<endl;
    cout << "======================================" <<endl;

    cout << "Enter Number 1: ";
    cin >> x;

    cout << "Enter Number 2: ";
    cin >> y;

    addition = x - y;
    
    cout << "======================================" <<endl;
    cout << "======:-- Addition is " << addition << " --:====== " <<endl;
    cout << "======================================" <<endl;

    return 0;
}