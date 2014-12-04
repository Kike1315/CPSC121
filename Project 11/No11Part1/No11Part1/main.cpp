//=============================================
//  File: No11Part1.cpp
//=============================================
//  Programmer: Sergio Gomez
//  Date: 11/29/2014
//  Class: CPSC 121
//  Instructor: Dr. Ray Ahmadnia
//
//  Description:
//      This project uses classes template
//=============================================

#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

template <class T, int n>
class TWO
{
private: T a[n];
public:
    void ReadData() // read data into array a
    {
        cout << "Enter " << n << " data: ";
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    void DisplayData() // dispaly array a
    {
        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    void SortArray() // sort array a
    {
        sort(a, a + n);
    }
    ~TWO() {}
};

int main()
{
    //display today's date and time
    time_t p; time(&p);
    cout << "Today's date and time is: ";
    cout << ctime(&p) << endl;
    
    TWO<int, 10> P;
    TWO<string, 12> Q;
    
    P.ReadData();
    Q.ReadData();
    
    P.DisplayData();
    Q.DisplayData();
    
    P.SortArray();
    Q.SortArray();
    
    P.DisplayData();
    Q.DisplayData();
    
    return 0;
}
/*===============Output===================
 Today's date and time is: Thu Dec  4 01:00:07 2014
 
 Enter 10 data: 1 12 9 3 15 7 2 8 19 14
 Enter 12 data: January September October June March November July May December February August April
 1 12 9 3 15 7 2 8 19 14
 January September October June March November July May December February August April
 1 2 3 7 8 9 12 14 15 19
 April August December February January July June March May November October September
 Program ended with exit code: 0
 */