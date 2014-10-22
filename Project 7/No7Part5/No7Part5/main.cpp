//================================================================
//    File: No7Part5.cpp
//================================================================
//    Programmer: Sergio Gomez
//    Date: 10/21/2014
//    Class: CPSC 121
//    Time: 2:30 TR
//    Instructor: Dr. Ray Ahmadnia
//    Project: No. 7 Part 5
//
//    Description:
//        this program uses recursive function to find Fibonacci
//        numbers of any number
//================================================================

#include <iostream>
#include <ctime>

using namespace std;

int Fib(int n);

int main()
{
    int begin, end;
    begin = clock();
    cout << "The 43 Fibonacci number is " << Fib(43) << endl;
    end = clock();
    cout << "Runtime = " << (end - begin) / 1000000 << " seconds\n";
    
    return 0;
}

int Fib(int n)
{
    if (n == 1 || n == 2) return 1;
    else return Fib(n-1) + Fib(n-2);
}

/*========================Output===============================
 Lab Computer
 The 43 Fibonacci number is 433494437
 Runtime = 20 seconds
 Press any key to continue . . .
 
 CASECS Room
 The 43 Fibonacci number is 433494437
 Runtime = 17 seconds
 Press any key to continue . . .
 
 Cell Phone
 The 43 Fibonacci number is 433494437
 Runtime = 12 seconds
 
 Laptop
 The 43 Fibonacci number is 433494437
 Runtime = 2 seconds
 Program ended with exit code: 0
 =============================================================*/
