//===========================================
//  File: No7Part4.cpp
//===========================================
//  Programmer: Sergio Gomez
//  Date: 10/20/2014
//  Class: CPSC 121
//  Time: 2:30 TR
//  Instructor: Dr. Ray Ahmadnia
//  Project: No.7 Part 4
//
//  Description:
//
//===========================================

#include <iostream>
#include <cmath>

using namespace std;

int exponential(int base, int n);

int main()
{
    cout << "start";
    cout << exponential(3, 5);
    cout <<endl;
    cout << "stop\n";
    
    return 0;
}

int exponential(int base, int n)
{
    if (n == 1)
        return pow(float(base), n);
    else
        return exponential(base, n++);
}