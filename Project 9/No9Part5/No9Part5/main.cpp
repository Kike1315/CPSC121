//============================================
//  File: No9Part5.cpp
//============================================
//  Programmer: Sergio Gomez
//  Date: 11/1/2014
//  Class: CPSC 121
//  Time: 2:30 TR
//  Instructor: Dr. Ray Ahmadnia
//  Project: No. 9 Part 5
//
//  Description:
//      This program is to practice Objective
//      Oriented Programming using functions
//============================================

// declare libraries
#include <iostream>
#include <ctime>

using namespace std;

class FIVE
{
private: int x[7];
public:
    void read() // read data in array x
    {
        cout << "Enter 7 integer data: ";
        for (int i = 0; i < 7; i++)
        {
            cin >> x[i];
        }
    }
    
    void display() // display array x
    {
        cout << "All data: ";
        for (int i = 0; i < 7; i++)
        {
            cout << x[i] << " ";
        }
        cout << endl;
    }
    
    // return the max and the min data in array x
    void findMaxMin(int& mx, int& mn)
    {
        mx = mn = x[0];
        for (int i = 1; i < 7; i++)
        {
            if(mx < x[i]) mx = x[i];
            if(mn > x[i]) mn = x[i];
        }
    }
    
    // return the sum of data in array x
    int findTotal()
    {
        int total = 0;
        for (int i = 0; i < 7; i++)
        {
            total += x[i];
        }
        return total;
    }
};

int main()
{
    // display today's date and time
    time_t p; time(&p);
    cout << "Today's date and time is: ";
    cout << ctime(&p) << endl;
    
    // declare variables
    FIVE proj5;
    int max, min, total;
    
    // call functions from class FIVE
    proj5.read();
    proj5.display();
    proj5.findMaxMin(max, min);
    total = proj5.findTotal();
    
    // prints max, min, total
    cout << "Maximum = " << max;
    cout << " Minimum = " << min;
    cout << " Total = " << total << endl;
    
    // terminate program
    return 0;
}

/*=================Output==================
 Today's date and time is: Sun Nov  2 18:10:48 2014
 
 Enter 7 integer data: 22 77 33 99 11 10 23
 All data: 22 77 33 99 11 10 23
 Maximum = 99 Minimum = 10 Total = 275
 Program ended with exit code: 0
 ========================================*/