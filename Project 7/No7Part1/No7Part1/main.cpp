//==========================================
//  File: No7Part1.cpp
//==========================================
//  Programmer: Sergio Gomez
//  Class: CPSC 121
//  Date: 10/20/2014
//  Instructor: Dr. Ray Ahmadnia
//  Project: No.7 Part 1
//
//  Description:
//      This program utilizes templates to
//      make one function that reads and
//      displays the arrays
//==========================================

// declare libraries
#include <iostream>

using namespace std;

// function prototypes
template <class T>
void ReadData(T x[], int size);
template <class T>
void DisplayData(T x[], int size);

int main()
{
    // displays today's date and time
    time_t p; time(&p);
    cout << "Today's date and time is: ";
    cout << ctime(&p) << endl;
    
    // declares intial arrays
    int a[5]; char c[6];
    float d[4]; string s[4];
    
    // read data into each array
    cout << "Enter 5 integer numbers: ";
    ReadData(a, 5);
    cout << "Enter 6 characters: ";
    ReadData(c, 6);
    cout << "Enter 4 decimal numbers: ";
    ReadData(d, 4);
    cout << "Enter 4 names: ";
    ReadData(s, 4);
    
    // display all arrays
    cout << "\tThis is array a: ";
    DisplayData(a, 5);
    cout << "\tThis is array c: ";
    DisplayData(c, 6);
    cout << "\tThis is array d: ";
    DisplayData(d, 4);
    cout << "\tThis is array s: ";
    DisplayData(s, 4);
    
    // terminate program
    return 0;
}

template <class T>
void ReadData(T x[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> x[i];
    }
}

template <class T>
void DisplayData(T x[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

/*===================Output=======================
 Today's date and time is: Mon Oct 20 01:11:51 2014
 
 Enter 5 integer numbers: 9 3 8 2 7
 Enter 6 characters: C S U F C S
 Enter 4 decimal numbers: 2.3 7.5 8.33 4.1
 Enter 4 names: Tom Bob Mary John
	This is array a: 9 3 8 2 7
	This is array c: C S U F C S
	This is array d: 2.3 7.5 8.33 4.1
	This is array s: Tom Bob Mary John
 Program ended with exit code: 0
================================================*/