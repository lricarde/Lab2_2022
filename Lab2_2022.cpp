// Lab2_2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "This is Leydi's attempt at Lab 2 for running a code to solve for the value of x in an equation such as this:\n";
    cout << "Ax+B=0\n";
    
    float A;
    float B;
    float x;

    cout << "\nPlease enter a value for A: ";
    cin >> A;

    cout << "A=" << A << endl;

    cout << "\nNow enter a value for B: ";
    cin >> B;

    cout << "And B=" << B << endl;

    cout << "\nTherefore we are now solving for: ";
    cout << A;
    cout << "x + ";
    cout << B;
    cout << " = 0";

    cout << "\nWhere the value of x will be: ";
    x = (-B / A);

    cout << "x=" << x << endl;

    //This is Leydi Ricardez's solution for Lab 2, done on 8/31/22
    //Running a code that is meant to solve for the linear equation of Ax+B=0
}
