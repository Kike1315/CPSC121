//===========================================
//  File: No8Part1.cpp
//===========================================
//  Programmer: Sergio Gomez
//  Date:10/24/2014
//  Class: CPSC 121
//  Time: 2:30 TR
//  Instructor: Dr. Ray Ahmadnia
//  Project: No. 8 Part 1
//
//  Description:
//      This program determines the frequency
//      of the numbers 0-9 by making random
//      numbers
//===========================================

// declare libraries
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

struct NUM {
    int num; int freq;
};

//function prototypes
void assignValues(NUM x[]);
void determineFreq(NUM x[]);
void displayTable(NUM x[]);
void determineLowHighFreq(NUM x[], int& highfreq, int& lowfreq);
void displayNum(NUM x[], int freq);

int main()
{
    // displays today's date and time
    time_t p; time(&p);
    cout << "Today's date and time is: ";
    cout << ctime(&p) << endl;
    
    srand(time(&p));
    
    //declares variables
    NUM All[10];
    int highfreq = 0, lowfreq = 0;
    
    //calls functions
    assignValues(All);
    determineFreq(All);
    displayTable(All);
    determineLowHighFreq(All, highfreq, lowfreq);
    
    cout << "Number(s) with largest frequency of ";
    cout << All[highfreq].freq << " is/are: ";
    displayNum(All, highfreq);
    
    cout << "Number(s) with smallest frequency of ";
    cout << All[lowfreq].freq << " is/are: ";
    displayNum(All, lowfreq);

    //terminates program
    return 0;
}

void assignValues(NUM x[])
{
    for (int i = 0; i < 10; i++)
    {
        x[i].num = i;
        x[i].freq = 0;
    }
}

void determineFreq(NUM x[])
{
    int random;
    for(int i = 0; i < 30; i++)
    {
        random = rand() % 10;
        switch (random)
        {
            case 0: x[0].freq += 1; break;
            case 1: x[1].freq += 1; break;
            case 2: x[2].freq += 1; break;
            case 3: x[3].freq += 1; break;
            case 4: x[4].freq += 1; break;
            case 5: x[5].freq += 1; break;
            case 6: x[6].freq += 1; break;
            case 7: x[7].freq += 1; break;
            case 8: x[8].freq += 1; break;
            case 9: x[9].freq += 1; break;
        }
        
    }
}

void displayTable(NUM x[])
{
    cout << left << setw(8) << "Number";
    cout << right << setw(10) << "Frequency";
    cout << endl;
    
    for(int i = 0; i < 18; i++)
    {
        cout << '-';
    }
    cout << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout << left << setw(8) << x[i].num;
        cout << right << setw(10) << x[i].freq;
        cout << endl;
    }
}

void determineLowHighFreq(NUM x[], int& highfreq, int& lowfreq)
{
    int m = 0; int n = 0;
    for(int i = 0; i < 10; i++)
    {
        if(x[m].freq < x[i].freq)
            m = i;
        if(x[n].freq > x[i].freq)
            n = i;
    }
    highfreq = x[m].freq;
    lowfreq = x[n].freq;
}

void displayNum(NUM x[], int freq)
{
    for(int i = 0; i < 10; i++)
    {
        if(x[i].freq == freq)
            cout << x[i].num << " ";
    }
    cout << endl;
}

/*====================Output======================
 Today's date and time is: Wed Oct 29 22:59:00 2014
 
 Number   Frequency
 ------------------
 0                3
 1                6
 2                3
 3                5
 4                0
 5                2
 6                2
 7                2
 8                7
 9                0
 Number(s) with largest frequency of 2 is/are: 8
 Number(s) with smallest frequency of 3 is/are: 4 9
 Program ended with exit code: 0
 ===============================================*/