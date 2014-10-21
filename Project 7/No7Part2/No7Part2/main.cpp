//============================================
//  File: No7Part2.cpp
//============================================
//  Programmer: Sergio Gomez
//  Date: 10/20/2014
//  Class: CPSC 121
//  Trime: 2:30 TR
//  Instructor: Dr. Ray Ahmadnia
//  Project: No.7 Part 2
//
//  Description:
//      This program utilizes txt file to
//      practice the use of dynamic arrays
//============================================

// declare libraries
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

// creates structure person
struct PERSON {
    int age; float gpa; char name[20];
};

// function prototypes
void numFiles(string fname, int& n);
void readData(string fname, PERSON x[], int n);
void display(PERSON x[], int n);

// main program
int main()
{
    // displays today's date and time
    time_t k; time(&k);
    cout << "Today's date and time is: ";
    cout << ctime(&k) << endl;
    
    // delares variable len
    int len;
    // determines length of file
    numFiles("two.txt", len);

    // creates person with length of file
    PERSON* p = new PERSON[len];
    // puts data from file to person
    readData("two.txt", p, len);
    
    // displays data in a table
    display(p, len);
    
    // terminates program
    return 0;
}

void numFiles(string fname, int& n)
{
    fstream f;
    f.open(fname, ios::in);
    f >> n;
    f.close();
}

void readData(string fname, PERSON x[], int n)
{
    fstream f;
    f.open(fname, ios::in);
    f.ignore();
    for(int i = 0; i < n; i++)
    {
        f >> x[i].age;
        f.ignore();
        f >> x[i].gpa;
        f.ignore();
        f.get(x[i].name, 20, '\n');
        f.ignore();
    }
}

void display(PERSON x[], int n)
{
    cout << left << setw(5) << "Age";
    cout << setw(5) << "GPA";
    cout << right << setw(20) << "Name\n";
    for(int i = 0; i < 30; i++)
    {
        cout << '_';
    }
    cout << endl;
    
    for(int i = 0; i < n; i++)
    {
        cout << fixed << showpoint << setprecision(1);
        cout << left << setw(5);
        cout << x[i].age;
        cout << setw(5) << x[i].gpa;
        cout << right << setw(20);
        cout << x[i].name << endl;
    }
}

/*=======================Output====================
 Today's date and time is: Tue Oct 21 11:02:18 2014
 
 Age  GPA                 Name
 ______________________________
 22   2.2          Bill Clinton
 33   3.3          Phil Jackson
 44   4.0        Mary A Johnson
 25   2.5            Adam Smith
 65   3.2         George W Bush
 Program ended with exit code: 0
 ================================================*/