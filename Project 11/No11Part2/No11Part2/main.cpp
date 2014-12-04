//=================================
//  File: No11Part2.cpp
//=================================
//  Programmer: Sergio Gomez
//  Date: 11/29/2014
//  Class: CPSC 121
//  Instructor: Dr. Ray Ahhmadnia
//
//  Description:
//      This project uses stacklib.h
//      to make multiple uses
//=================================

#include <iostream>
#include <ctime>
#include "stacklib.h"

using namespace std;

int main()
{
    time_t p; time(&p);
    cout << "Today's date and time is: ";
    cout << ctime(&p) << endl;
    
    STACK<char, 50> sent;
    
    sent.clearStack();
    cout << "Enter a sentence: ";
    char s;
    while(cin.get(s), s != '\n')
    {
        sent.pushStack(s);
    }
    
    cout << "Sentence in reverse order is ";
    while(!sent.emptyStack())
    {
        char c = sent.popStack();
        cout << c;
    }
    cout << endl;

    STACK<int, 50> number;
    int num = 0, base;
    
    number.clearStack();
    cout << "\nEnter an integer number < 100: ";
    cin >> num;
    cout << "Enter a new base(2,8,16): ";
    cin.ignore();
    cin >> base;
    
    int q = num / base;
    int r = num % base;
    while(q != 0)
    {
        number.pushStack(r);
        r = q % base;
        q = q / base;
    }
    number.pushStack(r);
    
    cout << num << " at base " << base
        << " is ";
    while(!number.emptyStack())
    {
        cout << number.popStack();
    }
    cout << endl;
    
    return 0;
}
/*===================Output====================
 Today's date and time is: Thu Dec  4 02:58:46 2014
 
 Enter a sentence: Happy Thanksgiving
 Sentence in reverse order is gnivigsknahT yppaH
 
 Enter an integer number < 100: 58
 Enter a new base(2,8,16): 2
 58 at base 2 is 111010
 
 Enter an integer number < 100: 58
 Enter a new base(2,8,16): 8
 58 at base 8 is 72
 
 Enter an integer number < 100: 58
 Enter a new base(2,8,16): 16
 58 at base 16 is 310
 Program ended with exit code: 0
 ===========================================*/
