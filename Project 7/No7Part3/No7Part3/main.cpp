//============================================
//  File: No7Part3.cpp
//============================================
//  Programmer: Sergio Gomez
//  Date: 10/20/2014
//  Class: CPSC 121
//  Professor: Dr. Ray Ahmadnia
//  Project: No.7 Part 3
//
//  Description:
//      This program pracitces the members
//      <cstring> library
//============================================

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name[15];
    cout << "Enter your full name: ";
    cin.get(name, 15, '\n');
    
    cout << "\tYour name's length is ";
    cout << strlen(name);
    cout << endl;
    
    cout << "\tYour name in lower case: ";
    strlow(name);
    cout << name;
    cout << endl;
    
    cout << "\tYour name in upper case: ";
    strupr(name);
    cout << name;
    cout << endl;
    
    cout << "\tYour first name: ";
    
    cout << endl;
    
    return 0;
}