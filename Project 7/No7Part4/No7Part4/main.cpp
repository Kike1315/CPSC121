//==============================================
//	File: No7Part4.cpp
//==============================================
//	Programmer: Sergio Gomez
//	Date: 10/21/2014
//	Class: CPSC 121
//	Time: 2:30 TR
//	Instructor: Dr. Ray Ahmadnia
//	Project: No. 7 Part 4
//
//	Description:
//		Utilizes exponential function to learn
//		recursive function
//==============================================

// declare variable
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

// function prototype
int exponential(int n);

int main()
{
    // displays today's date and time
    time_t p; time(&p);
    cout << "Today's date and time is: ";
    cout << ctime(&p) << endl;
    
    // determines the 10th term of base 3
    cout << "3^10 = ";
    cout << exponential(10);
    cout << endl;
    
    //terminate program
    return 0;
}

int exponential(int n)
{

    if(n == 2) return 9;
    else return pow(3., n) + exponential(n-1);
}
/*==================Output===================
 Today's date and time is: Tue Oct 21 16:39:46 2014
 
 3^10 = 88569
 Press any key to continue . . .
 ============================================*/
