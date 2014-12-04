//===================================
//  File: No11Part3.cpp
//===================================
//  Programmer: Sergio Gomez
//  Date: 11/29/2014
//  Class: CPSC 121
//  Instructor: Dr. Ray Ahmadnia
//
//  Description:
//      This project overloads operators
//      to combine objects.
//===================================

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class POINT
{
private: int x, y;
public:
    POINT()
    {x = 0; y = 0;}
    
    POINT(int a, int b)
    {x = a; y = b;}
    
    friend POINT operator+(POINT a, POINT b)
    {
        POINT c;
        c.x = a.x + b.x;
        c.y = a.y + b.y;
        return c;
    }
    
    friend POINT operator-(POINT a, POINT b)
    {
        POINT c;
        c.x = a.x - b.x;
        c.y = a.y - b.y;
        return c;
    }
    
    friend POINT operator*(POINT a, int c)
    {
        POINT b;
        b.x = a.x * c;
        b.y = a.y * c;
        return b;
    }
    
    friend float distance(POINT a, POINT b)
    {   return sqrt(pow((b.x-a.x), 2) + pow((b.y-a.y), 2)); }
    
    void showPoint(char c)
    {
        cout << c << "(" << x
            << "," << y << ")";
    }
    
    ~POINT() {}
};

int main()
{
    int x, y, con;
    cout << "Enter the coordinates of point A: ";
    cin >> x >> y;
    POINT a(x, y);
    
    cout << "Enter the coordinates of point B: ";
    cin >> x >> y;
    POINT b(x, y);
    POINT c;
    
    c = a + b;
    a.showPoint('A');
    cout << " + ";
    b.showPoint('B');
    cout << " = ";
    c.showPoint('C');
    cout << endl;
    
    c = a - b;
    a.showPoint('A');
    cout << " - ";
    b.showPoint('B');
    cout << " = ";
    c.showPoint('C');
    cout << endl << endl;
    
    cout << "Enter a constant: ";
    cin >> con;
    
    c = a * con;
    cout << con << " * ";
    a.showPoint('A');
    cout << " = ";
    c.showPoint('C');
    cout << endl << endl;
    
    float dist = distance(a, b);
    cout << fixed << showpoint << setprecision(2);
    cout << "The distance from ";
    a.showPoint('A'); cout << " to ";
    b.showPoint('B'); cout << " is "
    << dist << endl;
    
    return 0;
}

/*====================Output========================
 Enter the coordinates of point A: 3 4
 Enter the coordinates of point B: 5 7
 A(3,4) + B(5,7) = C(8,11)
 A(3,4) - B(5,7) = C(-2,-3)
 
 Enter a constant: 4
 4 * A(3,4) = C(12,16)
 
 The distance from A(3,4) to B(5,7) is 3.61
 Program ended with exit code: 0
 =================================================*/