//=============================================
//  File: No10Part1.cpp
//=============================================
//  Programmer: Sergio Gomez
//  Date: 11/09/14
//  Class: CPSC 121
//  Instructor: Dr. Ray Ahmadnia
//  Project: No. 10 Part 1
//
//  Description:
//      This project uses clases
//=============================================

// declare libraries
#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

class POINT
{
private: int x, y;
public:
    // constructor to set x, y of each vertex to ZERO
    POINT();
    // member to read x and y coordinate of each vertex
    void readData(char vertex);
    // display the (x,y) of a given vertex
    void display(char vertex);
    // friend to compute the distance between vertices p(x,y) and q(x,y)
    friend float distance(POINT p, POINT q);
    // compute and display the perimeter of ABCD
    friend void DisplayPer(float AB, float AC, float CD, float BD);
    // destructor to release all memory used by objects in the program
    ~POINT();
};

float distance(POINT p, POINT q);
void DisplayPer(float AB, float AC, float CD, float BD);

int main()
{
    // displays today's date and time
    time_t p; time(&p);
    cout << "Today's date and time is: ";
    cout << ctime(&p) << endl;
    
    POINT A, B, C, D;
    cout << "For the rectangle ABCD:\n";
    A.readData('A');
    B.readData('B');
    C.readData('C');
    D.readData('D');
    
    cout << endl;
    
    //draw the rectangle
    A.display('A'); cout << "----------------";
    B.display('B'); cout << endl;
    for(int i = 1; i <= 3; i++)
    {
        cout << "\t\t\t|\t\t\t\t|\n";
    }
    C.display('C'); cout << "----------------";
    D.display('D'); cout << endl;
    
    
    cout << fixed << showpoint << setprecision(2) << endl;
    //compute the leangth of each side
    float AB = distance(A, B);
    cout << "\tAB = " << AB << endl;
    float AC = distance(A, C);
    cout << "\tAC = " << AC << endl;
    float CD = distance(C, D);
    cout << "\tCD = " << CD << endl;
    float BD = distance(B, D);
    cout << "\tBD = " << BD << endl;
    
    // compute and display perimeter
    DisplayPer(AB, AC, CD, BD);
    
    //terminate program
    return 0;
}

POINT :: POINT()
{
    x = 0; y = 0;
}

void POINT :: readData(char vertex)
{
    cout << "\tEnter the x and y coordinates of vertex " << vertex << ": ";
    cin >> x >> y;
}

void POINT :: display(char vertex)
{
    cout << "\t" << vertex << " (" << x << "," << y << ") ";
}

float distance(POINT p, POINT q)
{
    float dist = 0.0;
    float distx, disty;
    distx = pow((q.x - p.x), 2);
    disty = pow((q.y - p.y), 2);
    dist = sqrt(distx + disty);
    
    return dist;
}

void DisplayPer(float AB, float AC, float CD, float BD)
{
    cout << endl;
    float perimeter = AB + AC + CD + BD;
    cout << "Perimeter = " << perimeter;
    cout << endl;
}

POINT :: ~POINT()
{}

/*==============================Output=====================================
 Today's date and time is: Wed Nov 12 23:32:56 2014
 
 For the rectangle ABCD:
	Enter the x and y coordinates of vertex A: 10 7
	Enter the x and y coordinates of vertex B: 20 7
	Enter the x and y coordinates of vertex C: 10 2
	Enter the x and y coordinates of vertex D: 20 2
 
	A (10,7) ----------------	B (20,7)
            |				|
            |				|
            |				|
	C (10,2) ----------------	D (20,2)
 
	AB = 10.00
	AC = 5.00
	CD = 10.00
	BD = 5.00
 
 Perimeter = 30.00
 Program ended with exit code: 0
 */