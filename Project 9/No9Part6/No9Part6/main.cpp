//=====================================================
//  File: No9Part6.cpp
//=====================================================
//  Programmer: Sergio Gomez
//  Date: 11/02/2014
//  Time: 2:30 TR
//  Class: CPSC 121
//  Instructor: Dr. Ray Ahmadnia
//  Project: No. 9 Part 6
//
//  Description:
//      This project uses structure and arrays to
//      practice Object Oriented Programming
//=====================================================

// declare libraries
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

class SIX
{
private:
    struct PERSON
    {
        string name;
        int age;
    };
    PERSON p[4];
public:
    //read data into array p
    void read()
    {
        for (int i = 0; i < 4; i++)
        {
            cout << "Enter a name and age: ";
            cin >> p[i].name >> p[i].age;
        }
    }
    
    // display array p
    void display()
    {
        cout << "The name list of people\n";
        cout << left << setw(8) << "NAME";
        cout << right << setw(3) << "AGE\n";
        for(int i = 0; i < 12; i++)
        {
            cout << "-";
        }
        cout << endl;
        for(int i = 0; i < 4; i++)
        {
            cout << left << setw(8) << p[i].name;
            cout << right << setw(3) << p[i].age;
            cout << endl;
        }
    }
    
    // find their age average
    int ageAve()
    {
        int total = 0;
        for(int i = 0; i < 4; i++)
        {
            total += p[i].age;
        }
        return total/4;
    }
    
    // display names above average
    void displayAboveAve(int ageAve)
    {
        cout << "The following people age is above average:\n";
        for(int i = 0; i < 4; i++)
        {
            if(p[i].age > ageAve)
                cout << p[i].name << " ";
        }
        cout << endl;
    }
};

int main()
{
    // displays today's date and time
    time_t p; time(&p);
    cout << "Today's date and time is: ";
    cout << ctime(&p) << endl;
    
    // declare variables
    SIX proj6;
    int average;
    
    // calls every funciton in class SIX
    proj6.read();
    proj6.display();
    average = proj6.ageAve();
    proj6.displayAboveAve(average);
    
    // terminate program
    return 0;
}
/*======================Output===============================
 Today's date and time is: Mon Nov  3 20:41:27 2014
 
 Enter a name and age: John 22
 Enter a name and age: Mary 19
 Enter a name and age: Cynthia 33
 Enter a name and age: George 25
 The name list of people
 NAME    AGE
 ------------
 John     22
 Mary     19
 Cynthia  33
 George   25
 The following people age is above average:
 Cynthia George
 Program ended with exit code: 0
 ==========================================================*/