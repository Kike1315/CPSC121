//============================================
//  File: No7Part3.cpp
//============================================
//  Programmer: Sergio Gomez
//  Date: 10/20/2014
//  Class: CPSC 121
//  Professor: Dr. Ray Ahmadnia
//  Project: No.7 Part 3
//
//  Description:
//      This program pracitces the members
//      <cstring> library
//============================================

#include <iostream>
#include <cstring>
#include <string>
#include <ctime>

using namespace std;

// function prototype
void compare(char x[], char y[]);

int main()
{
    // displays today's date and time
    time_t p; time(&p);
    cout << "Today's date and time is: ";
    cout << ctime(&p) << endl;
    
    // declares a variable name
    char name[15];
	char friendname[15];

    // prompts user for full name
    cout << "Enter your full name: ";
    cin.get(name, 15, '\n');
    
    // determines length of user's name
    cout << "\tYour name's length is ";
    cout << strlen(name);
    cout << endl;
    
    // displays user's name in lower case
    cout << "\tYour name in lower case: ";
    strlwr(name);
    cout << name;
    cout << endl;
    
    // displays user's name in upper case
    cout << "\tYour name in upper case: ";
    strupr(name);
    cout << name;
    cout << endl;
    
    // displays user's first name
    cout << "\tYour first name: ";
	strcpy(name, "BARACK");
	cout << name;
    cout << endl;
    
	cout << name << ", what is your friend's ";
	cout << "first name? ";
	cin >> friendname;

	compare(name, friendname);

    return 0;
}

void compare(char x[], char y[])
{
	strlwr(x);
	strlwr(y);
	if(strcmp(x, y) == 0)
		cout << "\tYour name is the same as your"
			<< " friend's name" << endl;
	else
		cout << "\tYou do not have the same name"
			<< " as your friend" << endl;
}

/*===============Output=================
Today's date and time is: Tue Oct 21 16:48:02 2014

Enter your full name: Barack H Obama
        Your name's length is 14
        Your name in lower case: barack h obama
        Your name in upper case: BARACK H OBAMA
        Your first name: BARACK
BARACK, what is your friend's first name? barack
        Your name is the same as your friend's name
Press any key to continue . . .
 =====================================*/
