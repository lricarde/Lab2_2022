// Lab2_2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "This is Leydi's attempt at running this code to solve for the value of x in this equation: ax+b=0\n";

    float A;
    float B;
    float X;

    cout << "Please enter a value for A: ";
    cin >> A;

    cout << "A=" << A << endl;

    B = (A * 4) + 1;
    cout << "And B=" << B << endl;

    X = (B / A);
    cout << "X=" << X << endl;

    //ax+b
}