//=============================================
//  File: No10Part2.cpp
//=============================================
//  Programmer: Sergio Gomez
//  Class: CPSC 131
//  Date: 11/11/2014
//  Time: 2:30 PM
//  Instructor: Dr. Ray Ahmadnia
//  Project: No.10 Part 2
//
//  Description:
//      This program uses clases
//=============================================

// declare libraries
#include <iostream>
#include <ctime>

using namespace std;

class TWO
{
private: int age[5];
public:
    //read data into array age
    void readData();
    // a friend to return the average of data in array age of object p
    friend int findAverage(TWO p);
    // find and return the max and min age
    void findMaxMin(int& maxAge, int& minAge);
    // display ages> age average
    void aboveAve(int ageAve);
    //display the max and min ages
    void displayMaxMinAge(int maxAge, int minAge);
    //release all memory used by objects
    ~TWO() {}
};

// function prototypes
int findAverage(TWO p);

int main()
{
    // displays today's date and time
    time_t p; time(&p);
    cout << "Today's date and time is: ";
    cout << ctime(&p) << endl;
    
    TWO object;
    object.readData();
    
    int average = findAverage(object);
    int maxAge, minAge;
    object.findMaxMin(maxAge, minAge);
    object.aboveAve(average);
    object.displayMaxMinAge(maxAge, minAge);
    
    return 0;
}

void TWO :: readData()
{
    cout << "Enter 5 ages: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> age[i];
    }
}

int findAverage(TWO p)
{
    int total = 0.0;
    for(int i = 0; i < 5; i++)
    {
        total += p.age[i];
    }
    
    return total / 5;
}

void TWO :: findMaxMin(int& maxAge, int& minAge)
{
    maxAge = minAge = age[0];
    for(int i = 1; i < 5; i++)
    {
        if(maxAge < age[i])
            maxAge = age[i];
        if(minAge > age[i])
            minAge = age[i];
    }
}

void TWO :: aboveAve(int ageAve)
{
    cout << "Ages above average: ";
    for(int i = 0; i < 5; i++)
    {
        if(age[i] > ageAve)
            cout << age[i] << " ";
    }
}

void TWO :: displayMaxMinAge(int maxAge, int minAge)
{
    cout << endl;
    cout << "Maximum age is " << maxAge << endl;;
    cout << "Minimum age is " << minAge << endl;;
}

/*======================Output========================
 Today's date and time is: Thu Nov 13 00:03:44 2014
 
 Enter 5 ages: 22 27 19 17 25
 Ages above average: 27 25
 Maximum age is 27
 Minimum age is 17
 Program ended with exit code: 0
 ===================================================*/