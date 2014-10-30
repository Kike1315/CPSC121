//===============================================
//  File: No8Part2.cpp
//===============================================
//  Programmer: Sergio Gomez
//  Date:10/24/2014
//  Class: CPSC 121
//  Time: 2:30 TR
//  Instructor: Dr. Ray Ahmadnia
//  Project: No. 8 Part 2
//
//  Description:
//      This program prompts user for number of
//      records and then displays the records the
//      user inputed
//===============================================

// declare libraries
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

struct PERSON {
    string name; int age; float gpa;
};

int main()
{
    // display today's date and time
    time_t k; time(&k);
    cout << "Today's date and time is: ";
    cout << ctime(&k) << endl;
    
    //declare variables
    int numofrec;
    
    // prompts user
    cout << "Enter the number of records: ";
    cin >> numofrec;
    
    // creates dynamic array p
    PERSON *p = new PERSON[numofrec];
    
    // prompts user for data
    for(int i = 0; i < numofrec; i++)
    {
        cout << "\tEnter name, age, and gpa: ";
        cin >> p[i].name >> p[i].age >> p[i].gpa;
    }
    
    // displays data to user
    cout << fixed << showpoint << setprecision(2);
    cout << "\nThis is the content of array p\n\t";
    cout << left << setw(10) << "NAME";
    cout << setw(4) << "AGE";
    cout << right << setw(4) << "GPA";
    for(int i = 0; i < numofrec; i++)
    {
        cout << "\n\t";
        cout << left << setw(10) << p[i].name;
        cout << setw(4) << p[i].age;
        cout << right << setw(4) << p[i].gpa;
    }
    cout << endl;
    
    //terminates program
    return 0;
}
/*======================Output=======================
 Today's date and time is: Wed Oct 29 23:17:23 2014
 
 Enter the number of records: 3
    Enter name, age, and gpa: Robert 21 2.1
    Enter name, age, and gpa: Kristal 20 2
    Enter name, age, and gpa: Joseph 22 3.1
 
 This is the content of array p
	NAME      AGE  GPA
	Robert    21  2.10
	Kristal   20  2.00
	Joseph    22  3.10
 Program ended with exit code: 0
 ===================================================*/