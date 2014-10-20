//============================================
//  File: No7Part3.cpp
//============================================
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
    
    cout << "\tYour name in lower case: ";
    cout << strlow(name);
    
    cout << "\tYour name in upper case: ";
    cout << strupr(name);
    
    cout << "\tYour first name: ";
    cout << 
    
    return 0;
}